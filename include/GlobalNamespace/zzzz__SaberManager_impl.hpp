#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SaberManager__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SaberManager__InitData::*)(bool, ::GlobalNamespace::SaberType)>(&::GlobalNamespace::__SaberManager__InitData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22640f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SaberManager__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__SaberManager__InitData::__set_oneSaberMode(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__SaberManager__InitData::__get_oneSaberMode()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__SaberManager__InitData::__get_oneSaberMode() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::__SaberManager__InitData::__set_oneSaberType(::GlobalNamespace::SaberType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SaberType, 0x14>(this, std::forward<::GlobalNamespace::SaberType>(value));
}
constexpr ::GlobalNamespace::SaberType& GlobalNamespace::__SaberManager__InitData::__get_oneSaberType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SaberType, 0x14>(this);
}
constexpr ::GlobalNamespace::SaberType const& GlobalNamespace::__SaberManager__InitData::__get_oneSaberType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SaberType, 0x14>(this);
}
/// @param oneSaberType: ::GlobalNamespace::SaberType (default: static_cast<int32_t>(0x0))
inline ::GlobalNamespace::__SaberManager__InitData* GlobalNamespace::__SaberManager__InitData::New_ctor(bool  oneSaberMode, ::GlobalNamespace::SaberType  oneSaberType)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SaberManager__InitData*>(oneSaberMode, oneSaberType));
}
/// @param oneSaberType: ::GlobalNamespace::SaberType (default: static_cast<int32_t>(0x0))
inline void GlobalNamespace::__SaberManager__InitData::_ctor(bool  oneSaberMode, ::GlobalNamespace::SaberType  oneSaberType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SaberManager__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, oneSaberMode, oneSaberType);
}
//  Writing Method size for method: ::GlobalNamespace::SaberManager.get_leftSaber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::Saber* (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::get_leftSaber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2263e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "get_leftSaber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.get_rightSaber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::Saber* (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::get_rightSaber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2263ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "get_rightSaber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.add_didUpdateSaberPositionsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberManager::*)(::System::Action_2<::GlobalNamespace::Saber*,::GlobalNamespace::Saber*>*)>(&::GlobalNamespace::SaberManager::add_didUpdateSaberPositionsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2262830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "add_didUpdateSaberPositionsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::Saber*,::GlobalNamespace::Saber*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.remove_didUpdateSaberPositionsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberManager::*)(::System::Action_2<::GlobalNamespace::Saber*,::GlobalNamespace::Saber*>*)>(&::GlobalNamespace::SaberManager::remove_didUpdateSaberPositionsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2262968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "remove_didUpdateSaberPositionsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::Saber*,::GlobalNamespace::Saber*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.set_disableSabers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberManager::*)(bool)>(&::GlobalNamespace::SaberManager::set_disableSabers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2263ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "set_disableSabers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2263eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2263ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2263ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::Update)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x226400c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.SaberForType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::Saber* (::GlobalNamespace::SaberManager::*)(::GlobalNamespace::SaberType)>(&::GlobalNamespace::SaberManager::SaberForType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22640a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "SaberForType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.RefreshSabers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::RefreshSabers)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2263ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "RefreshSabers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22640f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SaberManager::__set__leftSaber(::GlobalNamespace::Saber*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Saber*, 0x18>(this, std::forward<::GlobalNamespace::Saber*>(value));
}
constexpr ::GlobalNamespace::Saber* GlobalNamespace::SaberManager::__get__leftSaber()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Saber*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> GlobalNamespace::SaberManager::__get__leftSaber() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Saber*, 0x18>(this);
}
constexpr void GlobalNamespace::SaberManager::__set__rightSaber(::GlobalNamespace::Saber*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Saber*, 0x20>(this, std::forward<::GlobalNamespace::Saber*>(value));
}
constexpr ::GlobalNamespace::Saber* GlobalNamespace::SaberManager::__get__rightSaber()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Saber*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> GlobalNamespace::SaberManager::__get__rightSaber() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Saber*, 0x20>(this);
}
constexpr void GlobalNamespace::SaberManager::__set__initData(::GlobalNamespace::__SaberManager__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SaberManager__InitData*, 0x28>(this, std::forward<::GlobalNamespace::__SaberManager__InitData*>(value));
}
constexpr ::GlobalNamespace::__SaberManager__InitData* GlobalNamespace::SaberManager::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SaberManager__InitData*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SaberManager__InitData*> GlobalNamespace::SaberManager::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SaberManager__InitData*, 0x28>(this);
}
constexpr void GlobalNamespace::SaberManager::__set__started(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::SaberManager::__get__started()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& GlobalNamespace::SaberManager::__get__started() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void GlobalNamespace::SaberManager::__set_didUpdateSaberPositionsEvent(::System::Action_2<::GlobalNamespace::Saber*,::GlobalNamespace::Saber*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::Saber*,::GlobalNamespace::Saber*>*, 0x38>(this, std::forward<::System::Action_2<::GlobalNamespace::Saber*,::GlobalNamespace::Saber*>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::Saber*,::GlobalNamespace::Saber*>* GlobalNamespace::SaberManager::__get_didUpdateSaberPositionsEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::Saber*,::GlobalNamespace::Saber*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::Saber*,::GlobalNamespace::Saber*>*> GlobalNamespace::SaberManager::__get_didUpdateSaberPositionsEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::Saber*,::GlobalNamespace::Saber*>*, 0x38>(this);
}
inline ::GlobalNamespace::Saber* GlobalNamespace::SaberManager::get_leftSaber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "get_leftSaber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Saber*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::Saber* GlobalNamespace::SaberManager::get_rightSaber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "get_rightSaber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Saber*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SaberManager::add_didUpdateSaberPositionsEvent(::System::Action_2<::GlobalNamespace::Saber*,::GlobalNamespace::Saber*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "add_didUpdateSaberPositionsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::Saber*,::GlobalNamespace::Saber*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SaberManager::remove_didUpdateSaberPositionsEvent(::System::Action_2<::GlobalNamespace::Saber*,::GlobalNamespace::Saber*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "remove_didUpdateSaberPositionsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::Saber*,::GlobalNamespace::Saber*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SaberManager::set_disableSabers(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "set_disableSabers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SaberManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SaberManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SaberManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SaberManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::Saber* GlobalNamespace::SaberManager::SaberForType(::GlobalNamespace::SaberType  saberType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "SaberForType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Saber*, false>(*this, ___internal_method, saberType);
}
inline void GlobalNamespace::SaberManager::RefreshSabers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            "RefreshSabers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SaberManager* GlobalNamespace::SaberManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SaberManager*>());
}
inline void GlobalNamespace::SaberManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
