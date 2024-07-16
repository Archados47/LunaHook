

class Silkys:public ENGINE{
    public:
    Silkys(){
        
        check_by=CHECK_BY::FILE_ALL;
        check_by_target=check_by_list{L"data.arc",L"effect.arc",L"Script.arc"};
        /// Almost the same as Silkys except mes.arc is replaced by Script.arc
    }; 
     bool attach_function(); 
};
class SilkysOld:public ENGINE{
    public:
    SilkysOld(){
        
        check_by=CHECK_BY::FILE_ALL;
        check_by_target=check_by_list{L"bgm.AWF",L"effect.AWF",L"gcc.ARC",L"mes.ARC",L"sequence.ARC"};
        /// Almost the same as Silkys except mes.arc is replaced by Script.arc
    }; 
     bool attach_function(); 
};


class Siglusold:public ENGINE{
    public:
    Siglusold(){
        //女系家族
        //https://vndb.org/v5650
        check_by=CHECK_BY::FILE_ALL;
        check_by_target=check_by_list{L"*.mfg",L"*.mff",L"*.mfm",L"*.mfs"};
    };
     bool attach_function();
};


class Silkyssakura:public ENGINE{
    public:
    Silkyssakura(){
        //いれかわ　お姉ちゃん、ぼくの身体でオナニーしちゃうの!
        check_by=CHECK_BY::FILE;
        check_by_target=L"pak\\data001.pak";
    };
     bool attach_function();
};

class Silkysveryveryold:public ENGINE{
    public:
    Silkysveryveryold(){
        //flutter of birds II 天使たちの翼
        //https://vndb.org/v2380
        check_by=CHECK_BY::FILE;
        check_by_target=L"*SYS.ifl";
    };
     bool attach_function();
};
