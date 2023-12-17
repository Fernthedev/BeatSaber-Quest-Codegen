#pragma once
#include "GlobalNamespace/zzzz__ListSettingsController_impl.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsValueController_def.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsValueController_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
constexpr void GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType::__FormattedFloatListSettingsValueController__ValueType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType  GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType::Normal{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType  GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType::Normalized{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType  GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType::InvertedNormalized{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsValueController.GetInitValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::FormattedFloatListSettingsValueController::*)(ByRef<int32_t>, ByRef<int32_t>)>(&::GlobalNamespace::FormattedFloatListSettingsValueController::GetInitValues)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x22aa814;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsValueController.ApplyValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FormattedFloatListSettingsValueController::*)(int32_t)>(&::GlobalNamespace::FormattedFloatListSettingsValueController::ApplyValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x22aa8f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsValueController.TextForValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::FormattedFloatListSettingsValueController::*)(int32_t)>(&::GlobalNamespace::FormattedFloatListSettingsValueController::TextForValue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x22aa968;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsValueController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FormattedFloatListSettingsValueController::*)()>(&::GlobalNamespace::FormattedFloatListSettingsValueController::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x22aaa44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FormattedFloatListSettingsValueController::__set__settingsValue(::GlobalNamespace::FloatSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO*, 0x28>(this, std::forward<::GlobalNamespace::FloatSO*>(value));
}
constexpr ::GlobalNamespace::FloatSO* GlobalNamespace::FormattedFloatListSettingsValueController::__get__settingsValue()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> GlobalNamespace::FormattedFloatListSettingsValueController::__get__settingsValue() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x28>(this);
}
constexpr void GlobalNamespace::FormattedFloatListSettingsValueController::__set__values(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x30>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& GlobalNamespace::FormattedFloatListSettingsValueController::__get__values()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x30>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& GlobalNamespace::FormattedFloatListSettingsValueController::__get__values() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x30>(this);
}
constexpr void GlobalNamespace::FormattedFloatListSettingsValueController::__set__formattingString(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::FormattedFloatListSettingsValueController::__get__formattingString()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& GlobalNamespace::FormattedFloatListSettingsValueController::__get__formattingString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void GlobalNamespace::FormattedFloatListSettingsValueController::__set_valueType(::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType, 0x40>(this, std::forward<::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType>(value));
}
constexpr ::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType& GlobalNamespace::FormattedFloatListSettingsValueController::__get_valueType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType, 0x40>(this);
}
constexpr ::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType const& GlobalNamespace::FormattedFloatListSettingsValueController::__get_valueType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType, 0x40>(this);
}
constexpr void GlobalNamespace::FormattedFloatListSettingsValueController::__set__min(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FormattedFloatListSettingsValueController::__get__min()  {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr float_t const& GlobalNamespace::FormattedFloatListSettingsValueController::__get__min() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr void GlobalNamespace::FormattedFloatListSettingsValueController::__set__max(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FormattedFloatListSettingsValueController::__get__max()  {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr float_t const& GlobalNamespace::FormattedFloatListSettingsValueController::__get__max() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
inline bool GlobalNamespace::FormattedFloatListSettingsValueController::GetInitValues(ByRef<int32_t>  idx, ByRef<int32_t>  numberOfElements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(),
                            "GetInitValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, idx, numberOfElements);
}
inline void GlobalNamespace::FormattedFloatListSettingsValueController::ApplyValue(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(),
                            "ApplyValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, idx);
}
inline ::StringW GlobalNamespace::FormattedFloatListSettingsValueController::TextForValue(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(),
                            "TextForValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, idx);
}
inline ::GlobalNamespace::FormattedFloatListSettingsValueController* GlobalNamespace::FormattedFloatListSettingsValueController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FormattedFloatListSettingsValueController*>());
}
inline void GlobalNamespace::FormattedFloatListSettingsValueController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
