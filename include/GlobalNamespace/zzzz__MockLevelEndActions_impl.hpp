#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockLevelEndActions_def.hpp"
#include "GlobalNamespace/zzzz__ILevelEndActions_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockLevelEndActions.add_levelFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockLevelEndActions::*)(::System::Action*)>(&::GlobalNamespace::MockLevelEndActions::add_levelFailedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23bcbbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockLevelEndActions*>::get(),
                            "add_levelFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockLevelEndActions.remove_levelFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockLevelEndActions::*)(::System::Action*)>(&::GlobalNamespace::MockLevelEndActions::remove_levelFailedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23bcc58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockLevelEndActions*>::get(),
                            "remove_levelFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockLevelEndActions.add_levelFinishedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockLevelEndActions::*)(::System::Action*)>(&::GlobalNamespace::MockLevelEndActions::add_levelFinishedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23bccf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockLevelEndActions*>::get(),
                            "add_levelFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockLevelEndActions.remove_levelFinishedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockLevelEndActions::*)(::System::Action*)>(&::GlobalNamespace::MockLevelEndActions::remove_levelFinishedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23bcd90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockLevelEndActions*>::get(),
                            "remove_levelFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockLevelEndActions._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockLevelEndActions::*)()>(&::GlobalNamespace::MockLevelEndActions::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bce2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockLevelEndActions*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ILevelEndActions"
constexpr  GlobalNamespace::MockLevelEndActions::operator ::GlobalNamespace::ILevelEndActions*() noexcept {
return static_cast<::GlobalNamespace::ILevelEndActions*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::MockLevelEndActions::__set_levelFailedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x10>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::MockLevelEndActions::__get_levelFailedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::MockLevelEndActions::__get_levelFailedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x10>(this);
}
constexpr void GlobalNamespace::MockLevelEndActions::__set_levelFinishedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x18>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::MockLevelEndActions::__get_levelFinishedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::MockLevelEndActions::__get_levelFinishedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x18>(this);
}
inline void GlobalNamespace::MockLevelEndActions::add_levelFailedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockLevelEndActions*>::get(),
                            "add_levelFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MockLevelEndActions::remove_levelFailedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockLevelEndActions*>::get(),
                            "remove_levelFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MockLevelEndActions::add_levelFinishedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockLevelEndActions*>::get(),
                            "add_levelFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MockLevelEndActions::remove_levelFinishedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockLevelEndActions*>::get(),
                            "remove_levelFinishedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::MockLevelEndActions* GlobalNamespace::MockLevelEndActions::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MockLevelEndActions*>());
}
inline void GlobalNamespace::MockLevelEndActions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockLevelEndActions*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
