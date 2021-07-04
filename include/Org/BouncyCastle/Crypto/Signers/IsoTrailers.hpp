// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.IsoTrailers
  class IsoTrailers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IsoTrailers
    IsoTrailers() noexcept {}
    // Get static field: static private readonly System.Collections.IDictionary trailerMap
    static System::Collections::IDictionary* _get_trailerMap();
    // Set static field: static private readonly System.Collections.IDictionary trailerMap
    static void _set_trailerMap(System::Collections::IDictionary* value);
    // static private System.Collections.IDictionary CreateTrailerMap()
    // Offset: 0x12651F4
    static System::Collections::IDictionary* CreateTrailerMap();
    // static public System.Int32 GetTrailer(Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x12646E0
    static int GetTrailer(Org::BouncyCastle::Crypto::IDigest* digest);
    // static public System.Boolean NoTrailerAvailable(Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x1264584
    static bool NoTrailerAvailable(Org::BouncyCastle::Crypto::IDigest* digest);
    // static private System.Void .cctor()
    // Offset: 0x1265838
    static void _cctor();
  }; // Org.BouncyCastle.Crypto.Signers.IsoTrailers
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::IsoTrailers*, "Org.BouncyCastle.Crypto.Signers", "IsoTrailers");
// Writing includes for template specializations
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::IsoTrailers::CreateTrailerMap
// Il2CppName: CreateTrailerMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionary* (*)()>(&Org::BouncyCastle::Crypto::Signers::IsoTrailers::CreateTrailerMap)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::IsoTrailers*), "CreateTrailerMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::IsoTrailers::GetTrailer
// Il2CppName: GetTrailer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(Org::BouncyCastle::Crypto::IDigest*)>(&Org::BouncyCastle::Crypto::Signers::IsoTrailers::GetTrailer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::IsoTrailers*), "GetTrailer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::IDigest*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::IsoTrailers::NoTrailerAvailable
// Il2CppName: NoTrailerAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Org::BouncyCastle::Crypto::IDigest*)>(&Org::BouncyCastle::Crypto::Signers::IsoTrailers::NoTrailerAvailable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::IsoTrailers*), "NoTrailerAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::IDigest*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::IsoTrailers::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Signers::IsoTrailers::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::IsoTrailers*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
