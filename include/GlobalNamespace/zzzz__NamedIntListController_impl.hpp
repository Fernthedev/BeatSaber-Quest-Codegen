#pragma once
#include "GlobalNamespace/zzzz__ListSettingsController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NamedIntListController_def.hpp"
#include "GlobalNamespace/zzzz__NamedIntListController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "HMUI/zzzz__IValueChanger_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__NamedIntListController__TextValuePair.get_localizedText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__NamedIntListController__TextValuePair::*)()>(&::GlobalNamespace::__NamedIntListController__TextValuePair::get_localizedText)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23e5724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NamedIntListController__TextValuePair*>::get(),
                            "get_localizedText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__NamedIntListController__TextValuePair._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__NamedIntListController__TextValuePair::*)()>(&::GlobalNamespace::__NamedIntListController__TextValuePair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e5738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NamedIntListController__TextValuePair*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__NamedIntListController__TextValuePair::__set_localizationKey(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__NamedIntListController__TextValuePair::__get_localizationKey()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__NamedIntListController__TextValuePair::__get_localizationKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::__NamedIntListController__TextValuePair::__set_value(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__NamedIntListController__TextValuePair::__get_value()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& GlobalNamespace::__NamedIntListController__TextValuePair::__get_value() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
inline ::StringW GlobalNamespace::__NamedIntListController__TextValuePair::get_localizedText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NamedIntListController__TextValuePair*>::get(),
                            "get_localizedText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__NamedIntListController__TextValuePair* GlobalNamespace::__NamedIntListController__TextValuePair::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__NamedIntListController__TextValuePair*>());
}
inline void GlobalNamespace::__NamedIntListController__TextValuePair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NamedIntListController__TextValuePair*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController.add_valueChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NamedIntListController::*)(::System::Action_1<int32_t>*)>(&::GlobalNamespace::NamedIntListController::add_valueChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23e5484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                            "add_valueChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController.remove_valueChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NamedIntListController::*)(::System::Action_1<int32_t>*)>(&::GlobalNamespace::NamedIntListController::remove_valueChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23e5534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                            "remove_valueChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController.InitValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NamedIntListController::*)(::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*,::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*>)>(&::GlobalNamespace::NamedIntListController::InitValues)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23e55e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                            "InitValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*,::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController.SetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NamedIntListController::*)(int32_t)>(&::GlobalNamespace::NamedIntListController::SetValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23e561c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController.GetInitValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::NamedIntListController::*)(ByRef<int32_t>, ByRef<int32_t>)>(&::GlobalNamespace::NamedIntListController::GetInitValues)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23e5654;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController.ApplyValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NamedIntListController::*)(int32_t)>(&::GlobalNamespace::NamedIntListController::ApplyValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23e56c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController.TextForValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::NamedIntListController::*)(int32_t)>(&::GlobalNamespace::NamedIntListController::TextForValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23e56e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedIntListController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NamedIntListController::*)()>(&::GlobalNamespace::NamedIntListController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e5730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HMUI::IValueChanger_1<int32_t>"
constexpr  GlobalNamespace::NamedIntListController::operator ::HMUI::IValueChanger_1<int32_t>*() noexcept {
return static_cast<::HMUI::IValueChanger_1<int32_t>*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::NamedIntListController::__set__textValuePairs(::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*,::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*,::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*>, 0x28>(this, std::forward<::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*,::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*,::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*>& GlobalNamespace::NamedIntListController::__get__textValuePairs()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*,::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*>, 0x28>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*,::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*> const& GlobalNamespace::NamedIntListController::__get__textValuePairs() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*,::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*>, 0x28>(this);
}
constexpr void GlobalNamespace::NamedIntListController::__set__value(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::NamedIntListController::__get__value()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& GlobalNamespace::NamedIntListController::__get__value() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void GlobalNamespace::NamedIntListController::__set_valueChangedEvent(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<int32_t>*, 0x38>(this, std::forward<::System::Action_1<int32_t>*>(value));
}
constexpr ::System::Action_1<int32_t>* GlobalNamespace::NamedIntListController::__get_valueChangedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<int32_t>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> GlobalNamespace::NamedIntListController::__get_valueChangedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<int32_t>*, 0x38>(this);
}
inline void GlobalNamespace::NamedIntListController::add_valueChangedEvent(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                            "add_valueChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::NamedIntListController::remove_valueChangedEvent(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                            "remove_valueChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::NamedIntListController::InitValues(::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*,::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*>  values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                            "InitValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*,::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, values);
}
inline void GlobalNamespace::NamedIntListController::SetValue(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::NamedIntListController::GetInitValues(ByRef<int32_t>  idx, ByRef<int32_t>  numberOfElements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                            "GetInitValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, idx, numberOfElements);
}
inline void GlobalNamespace::NamedIntListController::ApplyValue(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                            "ApplyValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, idx);
}
inline ::StringW GlobalNamespace::NamedIntListController::TextForValue(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                            "TextForValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, idx);
}
inline ::GlobalNamespace::NamedIntListController* GlobalNamespace::NamedIntListController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NamedIntListController*>());
}
inline void GlobalNamespace::NamedIntListController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NamedIntListController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
