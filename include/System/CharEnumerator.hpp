// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x1E
  #pragma pack(push, 1)
  // Autogenerated type: System.CharEnumerator
  // [ComVisibleAttribute] Offset: D7A454
  class CharEnumerator : public ::Il2CppObject/*, public System::ICloneable, public System::Collections::Generic::IEnumerator_1<::Il2CppChar>*/ {
    public:
    // private System.String str
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* str;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 index
    // Size: 0x4
    // Offset: 0x18
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Char currentElement
    // Size: 0x2
    // Offset: 0x1C
    ::Il2CppChar currentElement;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Creating value type constructor for type: CharEnumerator
    CharEnumerator(::Il2CppString* str_ = {}, int index_ = {}, ::Il2CppChar currentElement_ = {}) noexcept : str{str_}, index{index_}, currentElement{currentElement_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppChar>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppChar>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppChar>*>(this);
    }
    // System.Void .ctor(System.String str)
    // Offset: 0x1781914
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CharEnumerator* New_ctor(::Il2CppString* str) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::CharEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CharEnumerator*, creationType>(str)));
    }
    // public System.Object Clone()
    // Offset: 0x1781948
    ::Il2CppObject* Clone();
    // public System.Boolean MoveNext()
    // Offset: 0x1781950
    bool MoveNext();
    // public System.Void Dispose()
    // Offset: 0x17819B0
    void Dispose();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x17819C8
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Char get_Current()
    // Offset: 0x1781AAC
    ::Il2CppChar get_Current();
    // public System.Void Reset()
    // Offset: 0x1781B70
    void Reset();
    // System.Void .ctor()
    // Offset: 0x1781B80
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CharEnumerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::CharEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CharEnumerator*, creationType>()));
    }
  }; // System.CharEnumerator
  #pragma pack(pop)
  static check_size<sizeof(CharEnumerator), 28 + sizeof(::Il2CppChar)> __System_CharEnumeratorSizeCheck;
  static_assert(sizeof(CharEnumerator) == 0x1E);
}
DEFINE_IL2CPP_ARG_TYPE(System::CharEnumerator*, "System", "CharEnumerator");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::CharEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::CharEnumerator::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::CharEnumerator::*)()>(&System::CharEnumerator::Clone)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::CharEnumerator*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::CharEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::CharEnumerator::*)()>(&System::CharEnumerator::MoveNext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::CharEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::CharEnumerator::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::CharEnumerator::*)()>(&System::CharEnumerator::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::CharEnumerator*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::CharEnumerator::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::CharEnumerator::*)()>(&System::CharEnumerator::System_Collections_IEnumerator_get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::CharEnumerator*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::CharEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::CharEnumerator::*)()>(&System::CharEnumerator::get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::CharEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::CharEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::CharEnumerator::*)()>(&System::CharEnumerator::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::CharEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::CharEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
