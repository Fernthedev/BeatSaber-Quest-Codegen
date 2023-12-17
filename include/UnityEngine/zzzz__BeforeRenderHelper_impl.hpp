#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__BeforeRenderHelper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/zzzz__BeforeRenderHelper_def.hpp"
constexpr void UnityEngine::__BeforeRenderHelper__OrderBlock::__set_order(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::__BeforeRenderHelper__OrderBlock::__get_order()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::__BeforeRenderHelper__OrderBlock::__get_order() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::__BeforeRenderHelper__OrderBlock::__set_callback(::UnityEngine::Events::UnityAction*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Events::UnityAction*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Events::UnityAction*>(value));
}
constexpr ::UnityEngine::Events::UnityAction* UnityEngine::__BeforeRenderHelper__OrderBlock::__get_callback()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction*> UnityEngine::__BeforeRenderHelper__OrderBlock::__get_callback() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityAction*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "order", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "callback", ty: "::UnityEngine::Events::UnityAction*", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::__BeforeRenderHelper__OrderBlock::__BeforeRenderHelper__OrderBlock(int32_t  order, ::UnityEngine::Events::UnityAction*  callback) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->order = order;
this->callback = callback;
}
//  Writing Method size for method: ::UnityEngine::BeforeRenderHelper.GetUpdateOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::BeforeRenderHelper::GetUpdateOrder)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2cc177c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderHelper*>::get(),
                            "GetUpdateOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BeforeRenderHelper.RegisterCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::BeforeRenderHelper::RegisterCallback)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x2cc1894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderHelper*>::get(),
                            "RegisterCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BeforeRenderHelper.UnregisterCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::BeforeRenderHelper::UnregisterCallback)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x2cc1bdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderHelper*>::get(),
                            "UnregisterCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BeforeRenderHelper.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::BeforeRenderHelper::Invoke)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2cc1eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderHelper*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void UnityEngine::BeforeRenderHelper::setStaticF_s_OrderBlocks(::System::Collections::Generic::List_1<::UnityEngine::__BeforeRenderHelper__OrderBlock>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::__BeforeRenderHelper__OrderBlock>*, "s_OrderBlocks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderHelper*>::get>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::__BeforeRenderHelper__OrderBlock>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::__BeforeRenderHelper__OrderBlock>* UnityEngine::BeforeRenderHelper::getStaticF_s_OrderBlocks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::__BeforeRenderHelper__OrderBlock>*, "s_OrderBlocks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderHelper*>::get>();
}
inline int32_t UnityEngine::BeforeRenderHelper::GetUpdateOrder(::UnityEngine::Events::UnityAction*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderHelper*>::get(),
                            "GetUpdateOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, callback);
}
inline void UnityEngine::BeforeRenderHelper::RegisterCallback(::UnityEngine::Events::UnityAction*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderHelper*>::get(),
                            "RegisterCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
inline void UnityEngine::BeforeRenderHelper::UnregisterCallback(::UnityEngine::Events::UnityAction*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderHelper*>::get(),
                            "UnregisterCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
inline void UnityEngine::BeforeRenderHelper::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderHelper*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
