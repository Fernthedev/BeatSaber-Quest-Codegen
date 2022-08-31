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
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Func_1, "System", "Func`1");
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Func`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [TypeForwardedFromAttribute] Offset: 103EC04
  template<typename TResult>
  class Func_1 : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Func_1<TResult>* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Func_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Func_1<TResult>*, creationType>(object, method)));
    }
    // public TResult Invoke()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TResult Invoke() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Func_1::Invoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TResult, false>(this, ___internal__method);
    }
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::Il2CppObject* object) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Func_1::BeginInvoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "BeginInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(object)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal__method, callback, object);
    }
    // public TResult EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TResult EndInvoke(::System::IAsyncResult* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Func_1::EndInvoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "EndInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result)})));
      return ::il2cpp_utils::RunMethodRethrow<TResult, false>(this, ___internal__method, result);
    }
  }; // System.Func`1
  // Could not write size check! Type: System.Func`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
