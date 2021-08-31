// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: Mono.Security
namespace Mono::Security {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.ASN1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: DA57D8
  class ASN1 : public ::Il2CppObject {
    public:
    // private System.Byte m_nTag
    // Size: 0x1
    // Offset: 0x10
    uint8_t m_nTag;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: m_nTag and: m_aValue
    char __padding0[0x7] = {};
    // private System.Byte[] m_aValue
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* m_aValue;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Collections.ArrayList elist
    // Size: 0x8
    // Offset: 0x20
    System::Collections::ArrayList* elist;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // Creating value type constructor for type: ASN1
    ASN1(uint8_t m_nTag_ = {}, ::Array<uint8_t>* m_aValue_ = {}, System::Collections::ArrayList* elist_ = {}) noexcept : m_nTag{m_nTag_}, m_aValue{m_aValue_}, elist{elist_} {}
    // Get instance field: private System.Byte m_nTag
    uint8_t _get_m_nTag();
    // Set instance field: private System.Byte m_nTag
    void _set_m_nTag(uint8_t value);
    // Get instance field: private System.Byte[] m_aValue
    ::Array<uint8_t>* _get_m_aValue();
    // Set instance field: private System.Byte[] m_aValue
    void _set_m_aValue(::Array<uint8_t>* value);
    // Get instance field: private System.Collections.ArrayList elist
    System::Collections::ArrayList* _get_elist();
    // Set instance field: private System.Collections.ArrayList elist
    void _set_elist(System::Collections::ArrayList* value);
    // public System.Int32 get_Count()
    // Offset: 0x1DFC4D0
    int get_Count();
    // public System.Byte get_Tag()
    // Offset: 0x1DFC4EC
    uint8_t get_Tag();
    // public System.Int32 get_Length()
    // Offset: 0x1DFC4F4
    int get_Length();
    // public System.Byte[] get_Value()
    // Offset: 0x1DFC50C
    ::Array<uint8_t>* get_Value();
    // public System.Void set_Value(System.Byte[] value)
    // Offset: 0x1DFC5A4
    void set_Value(::Array<uint8_t>* value);
    // public Mono.Security.ASN1 get_Item(System.Int32 index)
    // Offset: 0x1DFCEA4
    Mono::Security::ASN1* get_Item(int index);
    // public System.Void .ctor(System.Byte tag)
    // Offset: 0x1DFC1B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ASN1* New_ctor(uint8_t tag) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::ASN1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ASN1*, creationType>(tag)));
    }
    // public System.Void .ctor(System.Byte tag, System.Byte[] data)
    // Offset: 0x1DFC1E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ASN1* New_ctor(uint8_t tag, ::Array<uint8_t>* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::ASN1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ASN1*, creationType>(tag, data)));
    }
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x1DFC224
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ASN1* New_ctor(::Array<uint8_t>* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::ASN1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ASN1*, creationType>(data)));
    }
    // private System.Boolean CompareArray(System.Byte[] array1, System.Byte[] array2)
    // Offset: 0x1DFC630
    bool CompareArray(::Array<uint8_t>* array1, ::Array<uint8_t>* array2);
    // public System.Boolean CompareValue(System.Byte[] value)
    // Offset: 0x1DFC6AC
    bool CompareValue(::Array<uint8_t>* value);
    // public Mono.Security.ASN1 Add(Mono.Security.ASN1 asn1)
    // Offset: 0x1DFC6BC
    Mono::Security::ASN1* Add(Mono::Security::ASN1* asn1);
    // public System.Byte[] GetBytes()
    // Offset: 0x1DFC758
    ::Array<uint8_t>* GetBytes();
    // protected System.Void Decode(System.Byte[] asn1, ref System.Int32 anPos, System.Int32 anLength)
    // Offset: 0x1DFC3A4
    void Decode(::Array<uint8_t>* asn1, ByRef<int> anPos, int anLength);
    // protected System.Void DecodeTLV(System.Byte[] asn1, ref System.Int32 pos, out System.Byte tag, out System.Int32 length, out System.Byte[] content)
    // Offset: 0x1DFCD64
    void DecodeTLV(::Array<uint8_t>* asn1, ByRef<int> pos, ByRef<uint8_t> tag, ByRef<int> length, ByRef<::Array<uint8_t>*> content);
    // public Mono.Security.ASN1 Element(System.Int32 index, System.Byte anTag)
    // Offset: 0x1DFCFE4
    Mono::Security::ASN1* Element(int index, uint8_t anTag);
    // public override System.String ToString()
    // Offset: 0x1DFD140
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Mono.Security.ASN1
  #pragma pack(pop)
  static check_size<sizeof(ASN1), 32 + sizeof(System::Collections::ArrayList*)> __Mono_Security_ASN1SizeCheck;
  static_assert(sizeof(ASN1) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::ASN1*, "Mono.Security", "ASN1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::ASN1::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::ASN1::*)()>(&Mono::Security::ASN1::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1::get_Tag
// Il2CppName: get_Tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Mono::Security::ASN1::*)()>(&Mono::Security::ASN1::get_Tag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1*), "get_Tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::ASN1::*)()>(&Mono::Security::ASN1::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Mono::Security::ASN1::*)()>(&Mono::Security::ASN1::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::ASN1::*)(::Array<uint8_t>*)>(&Mono::Security::ASN1::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::ASN1* (Mono::Security::ASN1::*)(int)>(&Mono::Security::ASN1::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::ASN1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::ASN1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::ASN1::CompareArray
// Il2CppName: CompareArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::ASN1::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&Mono::Security::ASN1::CompareArray)> {
  static const MethodInfo* get() {
    static auto* array1 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* array2 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1*), "CompareArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array1, array2});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1::CompareValue
// Il2CppName: CompareValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::ASN1::*)(::Array<uint8_t>*)>(&Mono::Security::ASN1::CompareValue)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1*), "CompareValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::ASN1* (Mono::Security::ASN1::*)(Mono::Security::ASN1*)>(&Mono::Security::ASN1::Add)> {
  static const MethodInfo* get() {
    static auto* asn1 = &::il2cpp_utils::GetClassFromName("Mono.Security", "ASN1")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asn1});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Mono::Security::ASN1::*)()>(&Mono::Security::ASN1::GetBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::ASN1::*)(::Array<uint8_t>*, ByRef<int>, int)>(&Mono::Security::ASN1::Decode)> {
  static const MethodInfo* get() {
    static auto* asn1 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* anPos = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* anLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asn1, anPos, anLength});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1::DecodeTLV
// Il2CppName: DecodeTLV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::ASN1::*)(::Array<uint8_t>*, ByRef<int>, ByRef<uint8_t>, ByRef<int>, ByRef<::Array<uint8_t>*>)>(&Mono::Security::ASN1::DecodeTLV)> {
  static const MethodInfo* get() {
    static auto* asn1 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "Byte")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* content = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1*), "DecodeTLV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asn1, pos, tag, length, content});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1::Element
// Il2CppName: Element
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::ASN1* (Mono::Security::ASN1::*)(int, uint8_t)>(&Mono::Security::ASN1::Element)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* anTag = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1*), "Element", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, anTag});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Security::ASN1::*)()>(&Mono::Security::ASN1::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
