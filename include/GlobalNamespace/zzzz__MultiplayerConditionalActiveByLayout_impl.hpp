#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConditionalActiveByLayout_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLayoutProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConditionalActiveByLayout_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerLayout_def.hpp"
constexpr void GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition::__MultiplayerConditionalActiveByLayout__Condition(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition  GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition::ShowIf{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition  GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition::HideIf{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConditionalActiveByLayout.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConditionalActiveByLayout::*)()>(&::GlobalNamespace::MultiplayerConditionalActiveByLayout::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x22462a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConditionalActiveByLayout*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConditionalActiveByLayout.HandlePlayersLayoutWasCalculated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConditionalActiveByLayout::*)(::GlobalNamespace::MultiplayerPlayerLayout, int32_t)>(&::GlobalNamespace::MultiplayerConditionalActiveByLayout::HandlePlayersLayoutWasCalculated)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2246344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConditionalActiveByLayout*>::get(),
                            "HandlePlayersLayoutWasCalculated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlayerLayout>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConditionalActiveByLayout._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConditionalActiveByLayout::*)()>(&::GlobalNamespace::MultiplayerConditionalActiveByLayout::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224639c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConditionalActiveByLayout*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerConditionalActiveByLayout::__set__condition(::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition, 0x18>(this, std::forward<::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition>(value));
}
constexpr ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition& GlobalNamespace::MultiplayerConditionalActiveByLayout::__get__condition()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition, 0x18>(this);
}
constexpr ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition const& GlobalNamespace::MultiplayerConditionalActiveByLayout::__get__condition() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerConditionalActiveByLayout::__set__layout(::GlobalNamespace::MultiplayerPlayerLayout  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerPlayerLayout, 0x1c>(this, std::forward<::GlobalNamespace::MultiplayerPlayerLayout>(value));
}
constexpr ::GlobalNamespace::MultiplayerPlayerLayout& GlobalNamespace::MultiplayerConditionalActiveByLayout::__get__layout()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerPlayerLayout, 0x1c>(this);
}
constexpr ::GlobalNamespace::MultiplayerPlayerLayout const& GlobalNamespace::MultiplayerConditionalActiveByLayout::__get__layout() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerPlayerLayout, 0x1c>(this);
}
constexpr void GlobalNamespace::MultiplayerConditionalActiveByLayout::__set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLayoutProvider*, 0x20>(this, std::forward<::GlobalNamespace::MultiplayerLayoutProvider*>(value));
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider* GlobalNamespace::MultiplayerConditionalActiveByLayout::__get__layoutProvider()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLayoutProvider*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> GlobalNamespace::MultiplayerConditionalActiveByLayout::__get__layoutProvider() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLayoutProvider*, 0x20>(this);
}
inline void GlobalNamespace::MultiplayerConditionalActiveByLayout::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConditionalActiveByLayout*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConditionalActiveByLayout::HandlePlayersLayoutWasCalculated(::GlobalNamespace::MultiplayerPlayerLayout  layout, int32_t  playersCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConditionalActiveByLayout*>::get(),
                            "HandlePlayersLayoutWasCalculated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlayerLayout>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, layout, playersCount);
}
inline ::GlobalNamespace::MultiplayerConditionalActiveByLayout* GlobalNamespace::MultiplayerConditionalActiveByLayout::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerConditionalActiveByLayout*>());
}
inline void GlobalNamespace::MultiplayerConditionalActiveByLayout::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConditionalActiveByLayout*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
