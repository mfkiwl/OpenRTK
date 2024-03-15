function dt = Saastamoinen_TropoModel(lat__rad, alt__m, elevation)
   
    if alt__m < 0
        hgt = 0;
    else
        hgt = alt__m;
    end
        
    [p__Pa, T__K, ~] = CalcStandardAtmosphere(alt__m);

    pres = p__Pa / 100;

    % water vapour pressure (Magnus)
    e_magnus = 0.61094*exp((17.625*(T__K-273.15))/(T__K+243.04-273.15))/1e3;
    e = e_magnus;

    % /* saastamoninen model */
    z=pi/2.0-elevation;
    trph=0.0022768.*pres./(1.0-0.00266*cos(2.0*lat__rad)-0.00028*hgt/1e3)./cos(z);
    trpw=0.0022768*(1255.0+0.05*T__K)*e./T__K;
    dt = trph+trpw;
end