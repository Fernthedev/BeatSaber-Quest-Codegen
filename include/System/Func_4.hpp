// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: Func`4<T1, T2, T3, TResult>
  template<typename T1, typename T2, typename T3, typename TResult>
  class Func_4;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Func_4, "System", "Func`4");
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Func`4
  // [TokenAttribute] Offset: FFFFFFFF
  // [TypeForwardedFromAttribute] Offset: 103ECAC
  template<typename T1, typename T2, typename T3, typename TResult>
  class Func_4 : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Func_4<T1, T2, T3, TResult>* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Func_4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Func_4<T1, T2, T3, TResult>*, creationType>(object, method)));
    }
    // public TResult Invoke(T1 arg1, T2 arg2, T3 arg3)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TResult Invoke(T1 arg1, T2 arg2, T3 arg3) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Func_4::Invoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arg1), ::il2cpp_utils::ExtractType(arg2), ::il2cpp_utils::ExtractType(arg3)})));
      return ::il2cpp_utils::RunMethodRethrow<TResult, false>(this, ___internal__method, arg1, arg2, arg3);
    }
    // public System.IAsyncResult BeginInvoke(T1 arg1, T2 arg2, T3 arg3, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::IAsyncResult* BeginInvoke(T1 arg1, T2 arg2, T3 arg3, ::System::AsyncCallback* callback, ::Il2CppObject* object) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Func_4::BeginInvoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "BeginInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arg1), ::il2cpp_utils::ExtractType(arg2), ::il2cpp_utils::ExtractType(arg3), ::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(object)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal__method, arg1, arg2, arg3, callback, object);
    }
    // public TResult EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TResult EndInvoke(::System::IAsyncResult* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Func_4::EndInvoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "EndInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result)})));
      return ::il2cpp_utils::RunMethodRethrow<TResult, false>(this, ___internal__method, result);
    }
  }; // System.Func`4
  // Could not write size check! Type: System.Func`4 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
