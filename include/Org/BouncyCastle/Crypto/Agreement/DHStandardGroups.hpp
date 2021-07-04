// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: DHParameters
  class DHParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Agreement
namespace Org::BouncyCastle::Crypto::Agreement {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Agreement.DHStandardGroups
  class DHStandardGroups : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: DHStandardGroups
    DHStandardGroups() noexcept {}
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger Two
    static Org::BouncyCastle::Math::BigInteger* _get_Two();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger Two
    static void _set_Two(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly System.String rfc2409_768_p
    static ::Il2CppString* _get_rfc2409_768_p();
    // Set static field: static private readonly System.String rfc2409_768_p
    static void _set_rfc2409_768_p(::Il2CppString* value);
    // Get static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc2409_768
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_rfc2409_768();
    // Set static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc2409_768
    static void _set_rfc2409_768(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // Get static field: static private readonly System.String rfc2409_1024_p
    static ::Il2CppString* _get_rfc2409_1024_p();
    // Set static field: static private readonly System.String rfc2409_1024_p
    static void _set_rfc2409_1024_p(::Il2CppString* value);
    // Get static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc2409_1024
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_rfc2409_1024();
    // Set static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc2409_1024
    static void _set_rfc2409_1024(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // Get static field: static private readonly System.String rfc3526_1536_p
    static ::Il2CppString* _get_rfc3526_1536_p();
    // Set static field: static private readonly System.String rfc3526_1536_p
    static void _set_rfc3526_1536_p(::Il2CppString* value);
    // Get static field: static private readonly System.Int32 rfc3526_1536_l
    static int _get_rfc3526_1536_l();
    // Set static field: static private readonly System.Int32 rfc3526_1536_l
    static void _set_rfc3526_1536_l(int value);
    // Get static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc3526_1536
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_rfc3526_1536();
    // Set static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc3526_1536
    static void _set_rfc3526_1536(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // Get static field: static private readonly System.String rfc3526_2048_p
    static ::Il2CppString* _get_rfc3526_2048_p();
    // Set static field: static private readonly System.String rfc3526_2048_p
    static void _set_rfc3526_2048_p(::Il2CppString* value);
    // Get static field: static private readonly System.Int32 rfc3526_2048_l
    static int _get_rfc3526_2048_l();
    // Set static field: static private readonly System.Int32 rfc3526_2048_l
    static void _set_rfc3526_2048_l(int value);
    // Get static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc3526_2048
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_rfc3526_2048();
    // Set static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc3526_2048
    static void _set_rfc3526_2048(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // Get static field: static private readonly System.String rfc3526_3072_p
    static ::Il2CppString* _get_rfc3526_3072_p();
    // Set static field: static private readonly System.String rfc3526_3072_p
    static void _set_rfc3526_3072_p(::Il2CppString* value);
    // Get static field: static private readonly System.Int32 rfc3526_3072_l
    static int _get_rfc3526_3072_l();
    // Set static field: static private readonly System.Int32 rfc3526_3072_l
    static void _set_rfc3526_3072_l(int value);
    // Get static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc3526_3072
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_rfc3526_3072();
    // Set static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc3526_3072
    static void _set_rfc3526_3072(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // Get static field: static private readonly System.String rfc3526_4096_p
    static ::Il2CppString* _get_rfc3526_4096_p();
    // Set static field: static private readonly System.String rfc3526_4096_p
    static void _set_rfc3526_4096_p(::Il2CppString* value);
    // Get static field: static private readonly System.Int32 rfc3526_4096_l
    static int _get_rfc3526_4096_l();
    // Set static field: static private readonly System.Int32 rfc3526_4096_l
    static void _set_rfc3526_4096_l(int value);
    // Get static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc3526_4096
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_rfc3526_4096();
    // Set static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc3526_4096
    static void _set_rfc3526_4096(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // Get static field: static private readonly System.String rfc3526_6144_p
    static ::Il2CppString* _get_rfc3526_6144_p();
    // Set static field: static private readonly System.String rfc3526_6144_p
    static void _set_rfc3526_6144_p(::Il2CppString* value);
    // Get static field: static private readonly System.Int32 rfc3526_6144_l
    static int _get_rfc3526_6144_l();
    // Set static field: static private readonly System.Int32 rfc3526_6144_l
    static void _set_rfc3526_6144_l(int value);
    // Get static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc3526_6144
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_rfc3526_6144();
    // Set static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc3526_6144
    static void _set_rfc3526_6144(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // Get static field: static private readonly System.String rfc3526_8192_p
    static ::Il2CppString* _get_rfc3526_8192_p();
    // Set static field: static private readonly System.String rfc3526_8192_p
    static void _set_rfc3526_8192_p(::Il2CppString* value);
    // Get static field: static private readonly System.Int32 rfc3526_8192_l
    static int _get_rfc3526_8192_l();
    // Set static field: static private readonly System.Int32 rfc3526_8192_l
    static void _set_rfc3526_8192_l(int value);
    // Get static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc3526_8192
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_rfc3526_8192();
    // Set static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc3526_8192
    static void _set_rfc3526_8192(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // Get static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc4306_768
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_rfc4306_768();
    // Set static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc4306_768
    static void _set_rfc4306_768(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // Get static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc4306_1024
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_rfc4306_1024();
    // Set static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc4306_1024
    static void _set_rfc4306_1024(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // Get static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc5996_768
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_rfc5996_768();
    // Set static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc5996_768
    static void _set_rfc5996_768(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // Get static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc5996_1024
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_rfc5996_1024();
    // Set static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc5996_1024
    static void _set_rfc5996_1024(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // Get static field: static private readonly System.String rfc7919_ffdhe2048_p
    static ::Il2CppString* _get_rfc7919_ffdhe2048_p();
    // Set static field: static private readonly System.String rfc7919_ffdhe2048_p
    static void _set_rfc7919_ffdhe2048_p(::Il2CppString* value);
    // Get static field: static private readonly System.Int32 rfc7919_ffdhe2048_l
    static int _get_rfc7919_ffdhe2048_l();
    // Set static field: static private readonly System.Int32 rfc7919_ffdhe2048_l
    static void _set_rfc7919_ffdhe2048_l(int value);
    // Get static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc7919_ffdhe2048
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_rfc7919_ffdhe2048();
    // Set static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc7919_ffdhe2048
    static void _set_rfc7919_ffdhe2048(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // Get static field: static private readonly System.String rfc7919_ffdhe3072_p
    static ::Il2CppString* _get_rfc7919_ffdhe3072_p();
    // Set static field: static private readonly System.String rfc7919_ffdhe3072_p
    static void _set_rfc7919_ffdhe3072_p(::Il2CppString* value);
    // Get static field: static private readonly System.Int32 rfc7919_ffdhe3072_l
    static int _get_rfc7919_ffdhe3072_l();
    // Set static field: static private readonly System.Int32 rfc7919_ffdhe3072_l
    static void _set_rfc7919_ffdhe3072_l(int value);
    // Get static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc7919_ffdhe3072
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_rfc7919_ffdhe3072();
    // Set static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc7919_ffdhe3072
    static void _set_rfc7919_ffdhe3072(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // Get static field: static private readonly System.String rfc7919_ffdhe4096_p
    static ::Il2CppString* _get_rfc7919_ffdhe4096_p();
    // Set static field: static private readonly System.String rfc7919_ffdhe4096_p
    static void _set_rfc7919_ffdhe4096_p(::Il2CppString* value);
    // Get static field: static private readonly System.Int32 rfc7919_ffdhe4096_l
    static int _get_rfc7919_ffdhe4096_l();
    // Set static field: static private readonly System.Int32 rfc7919_ffdhe4096_l
    static void _set_rfc7919_ffdhe4096_l(int value);
    // Get static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc7919_ffdhe4096
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_rfc7919_ffdhe4096();
    // Set static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc7919_ffdhe4096
    static void _set_rfc7919_ffdhe4096(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // Get static field: static private readonly System.String rfc7919_ffdhe6144_p
    static ::Il2CppString* _get_rfc7919_ffdhe6144_p();
    // Set static field: static private readonly System.String rfc7919_ffdhe6144_p
    static void _set_rfc7919_ffdhe6144_p(::Il2CppString* value);
    // Get static field: static private readonly System.Int32 rfc7919_ffdhe6144_l
    static int _get_rfc7919_ffdhe6144_l();
    // Set static field: static private readonly System.Int32 rfc7919_ffdhe6144_l
    static void _set_rfc7919_ffdhe6144_l(int value);
    // Get static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc7919_ffdhe6144
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_rfc7919_ffdhe6144();
    // Set static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc7919_ffdhe6144
    static void _set_rfc7919_ffdhe6144(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // Get static field: static private readonly System.String rfc7919_ffdhe8192_p
    static ::Il2CppString* _get_rfc7919_ffdhe8192_p();
    // Set static field: static private readonly System.String rfc7919_ffdhe8192_p
    static void _set_rfc7919_ffdhe8192_p(::Il2CppString* value);
    // Get static field: static private readonly System.Int32 rfc7919_ffdhe8192_l
    static int _get_rfc7919_ffdhe8192_l();
    // Set static field: static private readonly System.Int32 rfc7919_ffdhe8192_l
    static void _set_rfc7919_ffdhe8192_l(int value);
    // Get static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc7919_ffdhe8192
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* _get_rfc7919_ffdhe8192();
    // Set static field: static public readonly Org.BouncyCastle.Crypto.Parameters.DHParameters rfc7919_ffdhe8192
    static void _set_rfc7919_ffdhe8192(Org::BouncyCastle::Crypto::Parameters::DHParameters* value);
    // static private Org.BouncyCastle.Math.BigInteger FromHex(System.String hex)
    // Offset: 0x1A179F8
    static Org::BouncyCastle::Math::BigInteger* FromHex(::Il2CppString* hex);
    // static private Org.BouncyCastle.Crypto.Parameters.DHParameters SafePrimeGen2(System.String hexP)
    // Offset: 0x1A17A94
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* SafePrimeGen2(::Il2CppString* hexP);
    // static private Org.BouncyCastle.Crypto.Parameters.DHParameters SafePrimeGen2(System.String hexP, System.Int32 l)
    // Offset: 0x1A17AFC
    static Org::BouncyCastle::Crypto::Parameters::DHParameters* SafePrimeGen2(::Il2CppString* hexP, int l);
    // static private System.Void .cctor()
    // Offset: 0x1A17BD4
    static void _cctor();
  }; // Org.BouncyCastle.Crypto.Agreement.DHStandardGroups
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*, "Org.BouncyCastle.Crypto.Agreement", "DHStandardGroups");
// Writing includes for template specializations
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::FromHex
// Il2CppName: FromHex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (*)(::Il2CppString*)>(&Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::FromHex)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*), "FromHex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::SafePrimeGen2
// Il2CppName: SafePrimeGen2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::DHParameters* (*)(::Il2CppString*)>(&Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::SafePrimeGen2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*), "SafePrimeGen2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::SafePrimeGen2
// Il2CppName: SafePrimeGen2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::DHParameters* (*)(::Il2CppString*, int)>(&Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::SafePrimeGen2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*), "SafePrimeGen2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Agreement::DHStandardGroups::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
