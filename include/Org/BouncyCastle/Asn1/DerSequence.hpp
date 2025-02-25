// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Sequence
#include "Org/BouncyCastle/Asn1/Asn1Sequence.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1EncodableVector
  class Asn1EncodableVector;
  // Skipping declaration: Asn1Encodable because it is already included!
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.DerSequence
  // [TokenAttribute] Offset: FFFFFFFF
  class DerSequence : public Org::BouncyCastle::Asn1::Asn1Sequence {
    public:
    // Creating value type constructor for type: DerSequence
    DerSequence() noexcept {}
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerSequence Empty
    static Org::BouncyCastle::Asn1::DerSequence* _get_Empty();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerSequence Empty
    static void _set_Empty(Org::BouncyCastle::Asn1::DerSequence* value);
    // static private System.Void .cctor()
    // Offset: 0x1740DA4
    static void _cctor();
    // static public Org.BouncyCastle.Asn1.DerSequence FromVector(Org.BouncyCastle.Asn1.Asn1EncodableVector elementVector)
    // Offset: 0x172EF10
    static Org::BouncyCastle::Asn1::DerSequence* FromVector(Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);
    // public System.Void .ctor()
    // Offset: 0x1735AF8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Sequence
    // Base method: System.Void Asn1Sequence::.ctor()
    // Base method: System.Void Asn1Object::.ctor()
    // Base method: System.Void Asn1Encodable::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerSequence* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerSequence::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerSequence*, creationType>()));
    }
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Encodable element)
    // Offset: 0x1731FE4
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Sequence
    // Base method: System.Void Asn1Sequence::.ctor(Org.BouncyCastle.Asn1.Asn1Encodable element)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerSequence* New_ctor(Org::BouncyCastle::Asn1::Asn1Encodable* element) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerSequence::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerSequence*, creationType>(element)));
    }
    // public System.Void .ctor(params Org.BouncyCastle.Asn1.Asn1Encodable[] elements)
    // Offset: 0x173ADD8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Sequence
    // Base method: System.Void Asn1Sequence::.ctor(params Org.BouncyCastle.Asn1.Asn1Encodable[] elements)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerSequence* New_ctor(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* elements) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerSequence::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerSequence*, creationType>(elements)));
    }
    // Creating initializer_list -> params proxy for: System.Void .ctor(params Org.BouncyCastle.Asn1.Asn1Encodable[] elements)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerSequence* New_ctor(std::initializer_list<Org::BouncyCastle::Asn1::Asn1Encodable*> elements) {
      return New_ctor<creationType>(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>::New(elements));
    }
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(params Org.BouncyCastle.Asn1.Asn1Encodable[] elements)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary, class ...TParams>
    static DerSequence* New_ctor(TParams&&... elements) {
      return New_ctor<creationType>({elements...});
    }
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector elementVector)
    // Offset: 0x1735AFC
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Sequence
    // Base method: System.Void Asn1Sequence::.ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector elementVector)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerSequence* New_ctor(Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerSequence::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerSequence*, creationType>(elementVector)));
    }
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1735E28
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
  }; // Org.BouncyCastle.Asn1.DerSequence
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerSequence*, "Org.BouncyCastle.Asn1", "DerSequence");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerSequence::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Asn1::DerSequence::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerSequence*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerSequence::FromVector
// Il2CppName: FromVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerSequence* (*)(Org::BouncyCastle::Asn1::Asn1EncodableVector*)>(&Org::BouncyCastle::Asn1::DerSequence::FromVector)> {
  static const MethodInfo* get() {
    static auto* elementVector = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1EncodableVector")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerSequence*), "FromVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{elementVector});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerSequence::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerSequence::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerSequence::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerSequence::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::DerSequence::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::DerSequence::*)(Org::BouncyCastle::Asn1::DerOutputStream*)>(&Org::BouncyCastle::Asn1::DerSequence::Encode)> {
  static const MethodInfo* get() {
    static auto* derOut = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerOutputStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::DerSequence*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{derOut});
  }
};
