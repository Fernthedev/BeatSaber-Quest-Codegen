// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.InputFieldDataBinder
#include "HMUI/InputFieldDataBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IObservableChange
  class IObservableChange;
  // Forward declaring type: IValue`1<T>
  template<typename T>
  class IValue_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HMUI::InputFieldDataBinder::$$c__3_1, "HMUI", "InputFieldDataBinder/<>c__3`1");
// Type namespace: HMUI
namespace HMUI {
  // WARNING Size may be invalid!
  // Autogenerated type: HMUI.InputFieldDataBinder/HMUI.<>c__3`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  class InputFieldDataBinder::$$c__3_1 : public ::Il2CppObject {
    public:
    // Autogenerated static field getter
    // Get static field: static public readonly HMUI.InputFieldDataBinder/HMUI.<>c__3`1<T> <>9
    static HMUI::InputFieldDataBinder::$$c__3_1<T>* _get_$$9() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::InputFieldDataBinder::$$c__3_1::_get_$$9");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<HMUI::InputFieldDataBinder::$$c__3_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<InputFieldDataBinder::$$c__3_1<T>*>::get(), "<>9")));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly HMUI.InputFieldDataBinder/HMUI.<>c__3`1<T> <>9
    static void _set_$$9(HMUI::InputFieldDataBinder::$$c__3_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::InputFieldDataBinder::$$c__3_1::_set_$$9");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<InputFieldDataBinder::$$c__3_1<T>*>::get(), "<>9", value)));
    }
    // Autogenerated static field getter
    // Get static field: static public System.Func`2<System.String,System.String> <>9__3_0
    static System::Func_2<::StringW, ::StringW>* _get_$$9__3_0() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::InputFieldDataBinder::$$c__3_1::_get_$$9__3_0");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_2<::StringW, ::StringW>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<InputFieldDataBinder::$$c__3_1<T>*>::get(), "<>9__3_0")));
    }
    // Autogenerated static field setter
    // Set static field: static public System.Func`2<System.String,System.String> <>9__3_0
    static void _set_$$9__3_0(System::Func_2<::StringW, ::StringW>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::InputFieldDataBinder::$$c__3_1::_set_$$9__3_0");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<InputFieldDataBinder::$$c__3_1<T>*>::get(), "<>9__3_0", value)));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::InputFieldDataBinder::$$c__3_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<InputFieldDataBinder::$$c__3_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // System.String <AddStringBindings>b__3_0(System.String value)
    // Offset: 0xFFFFFFFF
    ::StringW $AddStringBindings$b__3_0(::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::InputFieldDataBinder::$$c__3_1::<AddStringBindings>b__3_0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<AddStringBindings>b__3_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputFieldDataBinder::$$c__3_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::InputFieldDataBinder::$$c__3_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputFieldDataBinder::$$c__3_1<T>*, creationType>()));
    }
  }; // HMUI.InputFieldDataBinder/HMUI.<>c__3`1
  // Could not write size check! Type: HMUI.InputFieldDataBinder/HMUI.<>c__3`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
