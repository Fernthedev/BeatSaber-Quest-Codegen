#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ScoreUIController_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "GlobalNamespace/zzzz__ScoreUIController_def.hpp"
#include "GlobalNamespace/zzzz__IScoreController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ScoreUIController__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ScoreUIController__InitData::*)(::GlobalNamespace::__ScoreUIController__ScoreDisplayType)>(&::GlobalNamespace::__ScoreUIController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23c3280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScoreUIController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScoreUIController__ScoreDisplayType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__ScoreUIController__InitData::__set_scoreDisplayType(::GlobalNamespace::__ScoreUIController__ScoreDisplayType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__ScoreUIController__ScoreDisplayType, 0x10>(this, std::forward<::GlobalNamespace::__ScoreUIController__ScoreDisplayType>(value));
}
constexpr ::GlobalNamespace::__ScoreUIController__ScoreDisplayType& GlobalNamespace::__ScoreUIController__InitData::__get_scoreDisplayType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ScoreUIController__ScoreDisplayType, 0x10>(this);
}
constexpr ::GlobalNamespace::__ScoreUIController__ScoreDisplayType const& GlobalNamespace::__ScoreUIController__InitData::__get_scoreDisplayType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ScoreUIController__ScoreDisplayType, 0x10>(this);
}
inline ::GlobalNamespace::__ScoreUIController__InitData* GlobalNamespace::__ScoreUIController__InitData::New_ctor(::GlobalNamespace::__ScoreUIController__ScoreDisplayType  scoreDisplayType)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ScoreUIController__InitData*>(scoreDisplayType));
}
inline void GlobalNamespace::__ScoreUIController__InitData::_ctor(::GlobalNamespace::__ScoreUIController__ScoreDisplayType  scoreDisplayType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScoreUIController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScoreUIController__ScoreDisplayType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, scoreDisplayType);
}
constexpr void GlobalNamespace::__ScoreUIController__ScoreDisplayType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ScoreUIController__ScoreDisplayType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__ScoreUIController__ScoreDisplayType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ScoreUIController__ScoreDisplayType::__ScoreUIController__ScoreDisplayType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__ScoreUIController__ScoreDisplayType  GlobalNamespace::__ScoreUIController__ScoreDisplayType::MultipliedScore{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__ScoreUIController__ScoreDisplayType  GlobalNamespace::__ScoreUIController__ScoreDisplayType::ModifiedScore{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::ScoreUIController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScoreUIController::*)()>(&::GlobalNamespace::ScoreUIController::Start)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23c2d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreUIController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreUIController.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScoreUIController::*)()>(&::GlobalNamespace::ScoreUIController::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c309c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreUIController*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreUIController.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScoreUIController::*)()>(&::GlobalNamespace::ScoreUIController::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c30a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreUIController*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreUIController.RegisterForEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScoreUIController::*)()>(&::GlobalNamespace::ScoreUIController::RegisterForEvents)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x23c2d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreUIController*>::get(),
                            "RegisterForEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreUIController.UnregisterFromEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScoreUIController::*)()>(&::GlobalNamespace::ScoreUIController::UnregisterFromEvents)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x23c30a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreUIController*>::get(),
                            "UnregisterFromEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreUIController.HandleScoreDidChangeRealtime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScoreUIController::*)(int32_t, int32_t)>(&::GlobalNamespace::ScoreUIController::HandleScoreDidChangeRealtime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c31ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreUIController*>::get(),
                            "HandleScoreDidChangeRealtime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreUIController.UpdateScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScoreUIController::*)(int32_t, int32_t)>(&::GlobalNamespace::ScoreUIController::UpdateScore)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x23c2f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreUIController*>::get(),
                            "UpdateScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreUIController.Append000Number
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t)>(&::GlobalNamespace::ScoreUIController::Append000Number)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23c31b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreUIController*>::get(),
                            "Append000Number",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreUIController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScoreUIController::*)()>(&::GlobalNamespace::ScoreUIController::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23c3210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreUIController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ScoreUIController::__set__scoreText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x18>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::ScoreUIController::__get__scoreText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::ScoreUIController::__get__scoreText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x18>(this);
}
constexpr void GlobalNamespace::ScoreUIController::__set__initData(::GlobalNamespace::__ScoreUIController__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__ScoreUIController__InitData*, 0x20>(this, std::forward<::GlobalNamespace::__ScoreUIController__InitData*>(value));
}
constexpr ::GlobalNamespace::__ScoreUIController__InitData* GlobalNamespace::ScoreUIController::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ScoreUIController__InitData*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ScoreUIController__InitData*> GlobalNamespace::ScoreUIController::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ScoreUIController__InitData*, 0x20>(this);
}
constexpr void GlobalNamespace::ScoreUIController::__set__scoreController(::GlobalNamespace::IScoreController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IScoreController*, 0x28>(this, std::forward<::GlobalNamespace::IScoreController*>(value));
}
constexpr ::GlobalNamespace::IScoreController* GlobalNamespace::ScoreUIController::__get__scoreController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IScoreController*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> GlobalNamespace::ScoreUIController::__get__scoreController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IScoreController*, 0x28>(this);
}
constexpr void GlobalNamespace::ScoreUIController::__set__stringBuilder(::System::Text::StringBuilder*  value)  {
::cordl_internals::setInstanceField<::System::Text::StringBuilder*, 0x30>(this, std::forward<::System::Text::StringBuilder*>(value));
}
constexpr ::System::Text::StringBuilder* GlobalNamespace::ScoreUIController::__get__stringBuilder()  {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> GlobalNamespace::ScoreUIController::__get__stringBuilder() const {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x30>(this);
}
inline void GlobalNamespace::ScoreUIController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreUIController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ScoreUIController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreUIController*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ScoreUIController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreUIController*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ScoreUIController::RegisterForEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreUIController*>::get(),
                            "RegisterForEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ScoreUIController::UnregisterFromEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreUIController*>::get(),
                            "UnregisterFromEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ScoreUIController::HandleScoreDidChangeRealtime(int32_t  multipliedScore, int32_t  modifiedScore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreUIController*>::get(),
                            "HandleScoreDidChangeRealtime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, multipliedScore, modifiedScore);
}
inline void GlobalNamespace::ScoreUIController::UpdateScore(int32_t  multipliedScore, int32_t  modifiedScore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreUIController*>::get(),
                            "UpdateScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, multipliedScore, modifiedScore);
}
inline void GlobalNamespace::ScoreUIController::Append000Number(::System::Text::StringBuilder*  stringBuilder, int32_t  number)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreUIController*>::get(),
                            "Append000Number",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stringBuilder, number);
}
inline ::GlobalNamespace::ScoreUIController* GlobalNamespace::ScoreUIController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ScoreUIController*>());
}
inline void GlobalNamespace::ScoreUIController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreUIController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
