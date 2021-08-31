// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::EC
namespace Org::BouncyCastle::Crypto::EC {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
  // Forward declaring type: IList
  class IList;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9ECPoint
  class X9ECPoint;
  // Forward declaring type: X9ECParametersHolder
  class X9ECParametersHolder;
  // Forward declaring type: X9ECParameters
  class X9ECParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Forward declaring type: GlvTypeBParameters
  class GlvTypeBParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.EC
namespace Org::BouncyCastle::Crypto::EC {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.EC.CustomNamedCurves
  // [TokenAttribute] Offset: FFFFFFFF
  class CustomNamedCurves : public ::Il2CppObject {
    public:
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::Curve25519Holder
    class Curve25519Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP128R1Holder
    class SecP128R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP160K1Holder
    class SecP160K1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP160R1Holder
    class SecP160R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP160R2Holder
    class SecP160R2Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP192K1Holder
    class SecP192K1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP192R1Holder
    class SecP192R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP224K1Holder
    class SecP224K1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP224R1Holder
    class SecP224R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP256K1Holder
    class SecP256K1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP256R1Holder
    class SecP256R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP384R1Holder
    class SecP384R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP521R1Holder
    class SecP521R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT113R1Holder
    class SecT113R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT113R2Holder
    class SecT113R2Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT131R1Holder
    class SecT131R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT131R2Holder
    class SecT131R2Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT163K1Holder
    class SecT163K1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT163R1Holder
    class SecT163R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT163R2Holder
    class SecT163R2Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT193R1Holder
    class SecT193R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT193R2Holder
    class SecT193R2Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT233K1Holder
    class SecT233K1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT233R1Holder
    class SecT233R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT239K1Holder
    class SecT239K1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT283K1Holder
    class SecT283K1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT283R1Holder
    class SecT283R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT409K1Holder
    class SecT409K1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT409R1Holder
    class SecT409R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT571K1Holder
    class SecT571K1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT571R1Holder
    class SecT571R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SM2P256V1Holder
    class SM2P256V1Holder;
    // Creating value type constructor for type: CustomNamedCurves
    CustomNamedCurves() noexcept {}
    // Get static field: static private readonly System.Collections.IDictionary nameToCurve
    static System::Collections::IDictionary* _get_nameToCurve();
    // Set static field: static private readonly System.Collections.IDictionary nameToCurve
    static void _set_nameToCurve(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary nameToOid
    static System::Collections::IDictionary* _get_nameToOid();
    // Set static field: static private readonly System.Collections.IDictionary nameToOid
    static void _set_nameToOid(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary oidToCurve
    static System::Collections::IDictionary* _get_oidToCurve();
    // Set static field: static private readonly System.Collections.IDictionary oidToCurve
    static void _set_oidToCurve(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary oidToName
    static System::Collections::IDictionary* _get_oidToName();
    // Set static field: static private readonly System.Collections.IDictionary oidToName
    static void _set_oidToName(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IList names
    static System::Collections::IList* _get_names();
    // Set static field: static private readonly System.Collections.IList names
    static void _set_names(System::Collections::IList* value);
    // static private System.Void .cctor()
    // Offset: 0x192A1FC
    static void _cctor();
    // static private Org.BouncyCastle.Asn1.X9.X9ECPoint ConfigureBasepoint(Org.BouncyCastle.Math.EC.ECCurve curve, System.String encoding)
    // Offset: 0x1929930
    static Org::BouncyCastle::Asn1::X9::X9ECPoint* ConfigureBasepoint(Org::BouncyCastle::Math::EC::ECCurve* curve, ::Il2CppString* encoding);
    // static private Org.BouncyCastle.Math.EC.ECCurve ConfigureCurve(Org.BouncyCastle.Math.EC.ECCurve curve)
    // Offset: 0x1929A20
    static Org::BouncyCastle::Math::EC::ECCurve* ConfigureCurve(Org::BouncyCastle::Math::EC::ECCurve* curve);
    // static private Org.BouncyCastle.Math.EC.ECCurve ConfigureCurveGlv(Org.BouncyCastle.Math.EC.ECCurve c, Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters p)
    // Offset: 0x1929A24
    static Org::BouncyCastle::Math::EC::ECCurve* ConfigureCurveGlv(Org::BouncyCastle::Math::EC::ECCurve* c, Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* p);
    // static private System.Void DefineCurve(System.String name, Org.BouncyCastle.Asn1.X9.X9ECParametersHolder holder)
    // Offset: 0x1929AD0
    static void DefineCurve(::Il2CppString* name, Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* holder);
    // static private System.Void DefineCurveWithOid(System.String name, Org.BouncyCastle.Asn1.DerObjectIdentifier oid, Org.BouncyCastle.Asn1.X9.X9ECParametersHolder holder)
    // Offset: 0x1929C70
    static void DefineCurveWithOid(::Il2CppString* name, Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* holder);
    // static private System.Void DefineCurveAlias(System.String name, Org.BouncyCastle.Asn1.DerObjectIdentifier oid)
    // Offset: 0x1929F90
    static void DefineCurveAlias(::Il2CppString* name, Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
    // static public Org.BouncyCastle.Asn1.X9.X9ECParameters GetByName(System.String name)
    // Offset: 0x192AE24
    static Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByName(::Il2CppString* name);
    // static public Org.BouncyCastle.Asn1.X9.X9ECParameters GetByOid(Org.BouncyCastle.Asn1.DerObjectIdentifier oid)
    // Offset: 0x192AF84
    static Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByOid(Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
  }; // Org.BouncyCastle.Crypto.EC.CustomNamedCurves
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::EC::CustomNamedCurves*, "Org.BouncyCastle.Crypto.EC", "CustomNamedCurves");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::EC::CustomNamedCurves::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::EC::CustomNamedCurves*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureBasepoint
// Il2CppName: ConfigureBasepoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X9::X9ECPoint* (*)(Org::BouncyCastle::Math::EC::ECCurve*, ::Il2CppString*)>(&Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureBasepoint)> {
  static const MethodInfo* get() {
    static auto* curve = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECCurve")->byval_arg;
    static auto* encoding = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::EC::CustomNamedCurves*), "ConfigureBasepoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curve, encoding});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureCurve
// Il2CppName: ConfigureCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECCurve* (*)(Org::BouncyCastle::Math::EC::ECCurve*)>(&Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureCurve)> {
  static const MethodInfo* get() {
    static auto* curve = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::EC::CustomNamedCurves*), "ConfigureCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curve});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureCurveGlv
// Il2CppName: ConfigureCurveGlv
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECCurve* (*)(Org::BouncyCastle::Math::EC::ECCurve*, Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*)>(&Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureCurveGlv)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECCurve")->byval_arg;
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Endo", "GlvTypeBParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::EC::CustomNamedCurves*), "ConfigureCurveGlv", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c, p});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurve
// Il2CppName: DefineCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*)>(&Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurve)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* holder = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1.X9", "X9ECParametersHolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::EC::CustomNamedCurves*), "DefineCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, holder});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurveWithOid
// Il2CppName: DefineCurveWithOid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, Org::BouncyCastle::Asn1::DerObjectIdentifier*, Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*)>(&Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurveWithOid)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* oid = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerObjectIdentifier")->byval_arg;
    static auto* holder = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1.X9", "X9ECParametersHolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::EC::CustomNamedCurves*), "DefineCurveWithOid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, oid, holder});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurveAlias
// Il2CppName: DefineCurveAlias
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurveAlias)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* oid = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerObjectIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::EC::CustomNamedCurves*), "DefineCurveAlias", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, oid});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetByName
// Il2CppName: GetByName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::Il2CppString*)>(&Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetByName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::EC::CustomNamedCurves*), "GetByName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetByOid
// Il2CppName: GetByOid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetByOid)> {
  static const MethodInfo* get() {
    static auto* oid = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerObjectIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::EC::CustomNamedCurves*), "GetByOid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oid});
  }
};
