// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
// Including type: Org.BouncyCastle.Asn1.IAsn1Choice
#include "Org/BouncyCastle/Asn1/IAsn1Choice.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1TaggedObject
  class Asn1TaggedObject;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.DistributionPointName
  // [TokenAttribute] Offset: FFFFFFFF
  class DistributionPointName : public Org::BouncyCastle::Asn1::Asn1Encodable/*, public Org::BouncyCastle::Asn1::IAsn1Choice*/ {
    public:
    // readonly Org.BouncyCastle.Asn1.Asn1Encodable name
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1Encodable* name;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Encodable*) == 0x8);
    // readonly System.Int32 type
    // Size: 0x4
    // Offset: 0x18
    int type;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DistributionPointName
    DistributionPointName(Org::BouncyCastle::Asn1::Asn1Encodable* name_ = {}, int type_ = {}) noexcept : name{name_}, type{type_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Asn1::IAsn1Choice
    operator Org::BouncyCastle::Asn1::IAsn1Choice() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Asn1::IAsn1Choice*>(this);
    }
    // Get instance field reference: readonly Org.BouncyCastle.Asn1.Asn1Encodable name
    Org::BouncyCastle::Asn1::Asn1Encodable*& dyn_name();
    // Get instance field reference: readonly System.Int32 type
    int& dyn_type();
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1TaggedObject obj)
    // Offset: 0x19F9DE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DistributionPointName* New_ctor(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::DistributionPointName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DistributionPointName*, creationType>(obj)));
    }
    // static public Org.BouncyCastle.Asn1.X509.DistributionPointName GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject obj, System.Boolean explicitly)
    // Offset: 0x19F983C
    static Org::BouncyCastle::Asn1::X509::DistributionPointName* GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);
    // static public Org.BouncyCastle.Asn1.X509.DistributionPointName GetInstance(System.Object obj)
    // Offset: 0x19F9C64
    static Org::BouncyCastle::Asn1::X509::DistributionPointName* GetInstance(::Il2CppObject* obj);
    // private System.Void appendObject(System.Text.StringBuilder buf, System.String sep, System.String name, System.String val)
    // Offset: 0x19F9FF0
    void appendObject(System::Text::StringBuilder* buf, ::Il2CppString* sep, ::Il2CppString* name, ::Il2CppString* val);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x19F9E40
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
    // public override System.String ToString()
    // Offset: 0x19F9EBC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.Asn1.X509.DistributionPointName
  #pragma pack(pop)
  static check_size<sizeof(DistributionPointName), 24 + sizeof(int)> __Org_BouncyCastle_Asn1_X509_DistributionPointNameSizeCheck;
  static_assert(sizeof(DistributionPointName) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::DistributionPointName*, "Org.BouncyCastle.Asn1.X509", "DistributionPointName");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::DistributionPointName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::DistributionPointName::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::DistributionPointName* (*)(Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(&Org::BouncyCastle::Asn1::X509::DistributionPointName::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1TaggedObject")->byval_arg;
    static auto* explicitly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::DistributionPointName*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, explicitly});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::DistributionPointName::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::DistributionPointName* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::DistributionPointName::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::DistributionPointName*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::DistributionPointName::appendObject
// Il2CppName: appendObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::X509::DistributionPointName::*)(System::Text::StringBuilder*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&Org::BouncyCastle::Asn1::X509::DistributionPointName::appendObject)> {
  static const MethodInfo* get() {
    static auto* buf = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* sep = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::DistributionPointName*), "appendObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf, sep, name, val});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::DistributionPointName::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::DistributionPointName::*)()>(&Org::BouncyCastle::Asn1::X509::DistributionPointName::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::DistributionPointName*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::DistributionPointName::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Asn1::X509::DistributionPointName::*)()>(&Org::BouncyCastle::Asn1::X509::DistributionPointName::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::DistributionPointName*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
