// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1Object
  class Asn1Object : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // Creating value type constructor for type: Asn1Object
    Asn1Object() noexcept {}
    // static public Org.BouncyCastle.Asn1.Asn1Object FromByteArray(System.Byte[] data)
    // Offset: 0x16F3BF0
    static Org::BouncyCastle::Asn1::Asn1Object* FromByteArray(::Array<uint8_t>* data);
    // static public Org.BouncyCastle.Asn1.Asn1Object FromStream(System.IO.Stream inStr)
    // Offset: 0x16F3DD4
    static Org::BouncyCastle::Asn1::Asn1Object* FromStream(System::IO::Stream* inStr);
    // System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0xFFFFFFFF
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0xFFFFFFFF
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
    // protected System.Int32 Asn1GetHashCode()
    // Offset: 0xFFFFFFFF
    int Asn1GetHashCode();
    // System.Boolean CallAsn1Equals(Org.BouncyCastle.Asn1.Asn1Object obj)
    // Offset: 0x16EF93C
    bool CallAsn1Equals(Org::BouncyCastle::Asn1::Asn1Object* obj);
    // System.Int32 CallAsn1GetHashCode()
    // Offset: 0x16EF80C
    int CallAsn1GetHashCode();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x16F3EFC
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
    // protected System.Void .ctor()
    // Offset: 0x16F3BA0
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: System.Void Asn1Encodable::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1Object* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1Object::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1Object*, creationType>()));
    }
  }; // Org.BouncyCastle.Asn1.Asn1Object
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1Object*, "Org.BouncyCastle.Asn1", "Asn1Object");
// Writing includes for template specializations
#include "System/IO/Stream.hpp"
#include "Org/BouncyCastle/Asn1/DerOutputStream.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1Object::FromByteArray
// Il2CppName: FromByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Asn1::Asn1Object::FromByteArray)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1Object*), "FromByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1Object::FromStream
// Il2CppName: FromStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (*)(System::IO::Stream*)>(&Org::BouncyCastle::Asn1::Asn1Object::FromStream)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1Object*), "FromStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IO::Stream*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1Object::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Asn1Object::*)(Org::BouncyCastle::Asn1::DerOutputStream*)>(&Org::BouncyCastle::Asn1::Asn1Object::Encode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1Object*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Asn1::DerOutputStream*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1Object::Asn1Equals
// Il2CppName: Asn1Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::Asn1Object::*)(Org::BouncyCastle::Asn1::Asn1Object*)>(&Org::BouncyCastle::Asn1::Asn1Object::Asn1Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1Object*), "Asn1Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Asn1::Asn1Object*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1Object::Asn1GetHashCode
// Il2CppName: Asn1GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::Asn1Object::*)()>(&Org::BouncyCastle::Asn1::Asn1Object::Asn1GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1Object*), "Asn1GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1Object::CallAsn1Equals
// Il2CppName: CallAsn1Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::Asn1Object::*)(Org::BouncyCastle::Asn1::Asn1Object*)>(&Org::BouncyCastle::Asn1::Asn1Object::CallAsn1Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1Object*), "CallAsn1Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Asn1::Asn1Object*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1Object::CallAsn1GetHashCode
// Il2CppName: CallAsn1GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::Asn1Object::*)()>(&Org::BouncyCastle::Asn1::Asn1Object::CallAsn1GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1Object*), "CallAsn1GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1Object::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Asn1Object::*)()>(&Org::BouncyCastle::Asn1::Asn1Object::ToAsn1Object)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Asn1Object*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Asn1Object::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
