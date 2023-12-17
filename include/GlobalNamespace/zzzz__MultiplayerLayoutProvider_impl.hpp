#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLayoutProvider_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerLayout_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLayoutProvider.get_layout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerPlayerLayout (::GlobalNamespace::MultiplayerLayoutProvider::*)()>(&::GlobalNamespace::MultiplayerLayoutProvider::get_layout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224fcdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLayoutProvider*>::get(),
                            "get_layout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLayoutProvider.set_layout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLayoutProvider::*)(::GlobalNamespace::MultiplayerPlayerLayout)>(&::GlobalNamespace::MultiplayerLayoutProvider::set_layout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224fce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLayoutProvider*>::get(),
                            "set_layout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlayerLayout>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLayoutProvider.get_activePlayerSpotsCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MultiplayerLayoutProvider::*)()>(&::GlobalNamespace::MultiplayerLayoutProvider::get_activePlayerSpotsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224fcec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLayoutProvider*>::get(),
                            "get_activePlayerSpotsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLayoutProvider.set_activePlayerSpotsCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLayoutProvider::*)(int32_t)>(&::GlobalNamespace::MultiplayerLayoutProvider::set_activePlayerSpotsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224fcf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLayoutProvider*>::get(),
                            "set_activePlayerSpotsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLayoutProvider.add_playersLayoutWasCalculatedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLayoutProvider::*)(::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout,int32_t>*)>(&::GlobalNamespace::MultiplayerLayoutProvider::add_playersLayoutWasCalculatedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22457c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLayoutProvider*>::get(),
                            "add_playersLayoutWasCalculatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout,int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLayoutProvider.remove_playersLayoutWasCalculatedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLayoutProvider::*)(::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout,int32_t>*)>(&::GlobalNamespace::MultiplayerLayoutProvider::remove_playersLayoutWasCalculatedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2245908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLayoutProvider*>::get(),
                            "remove_playersLayoutWasCalculatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout,int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLayoutProvider.CalculateLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerPlayerLayout (::GlobalNamespace::MultiplayerLayoutProvider::*)(int32_t)>(&::GlobalNamespace::MultiplayerLayoutProvider::CalculateLayout)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x224fcfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLayoutProvider*>::get(),
                            "CalculateLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLayoutProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLayoutProvider::*)()>(&::GlobalNamespace::MultiplayerLayoutProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224fd58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLayoutProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerLayoutProvider::__set__layout_k__BackingField(::GlobalNamespace::MultiplayerPlayerLayout  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerPlayerLayout, 0x10>(this, std::forward<::GlobalNamespace::MultiplayerPlayerLayout>(value));
}
constexpr ::GlobalNamespace::MultiplayerPlayerLayout& GlobalNamespace::MultiplayerLayoutProvider::__get__layout_k__BackingField()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerPlayerLayout, 0x10>(this);
}
constexpr ::GlobalNamespace::MultiplayerPlayerLayout const& GlobalNamespace::MultiplayerLayoutProvider::__get__layout_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerPlayerLayout, 0x10>(this);
}
constexpr void GlobalNamespace::MultiplayerLayoutProvider::__set__activePlayerSpotsCount_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::MultiplayerLayoutProvider::__get__activePlayerSpotsCount_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& GlobalNamespace::MultiplayerLayoutProvider::__get__activePlayerSpotsCount_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void GlobalNamespace::MultiplayerLayoutProvider::__set_playersLayoutWasCalculatedEvent(::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout,int32_t>*, 0x18>(this, std::forward<::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout,int32_t>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout,int32_t>* GlobalNamespace::MultiplayerLayoutProvider::__get_playersLayoutWasCalculatedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout,int32_t>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout,int32_t>*> GlobalNamespace::MultiplayerLayoutProvider::__get_playersLayoutWasCalculatedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout,int32_t>*, 0x18>(this);
}
inline ::GlobalNamespace::MultiplayerPlayerLayout GlobalNamespace::MultiplayerLayoutProvider::get_layout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLayoutProvider*>::get(),
                            "get_layout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerPlayerLayout, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLayoutProvider::set_layout(::GlobalNamespace::MultiplayerPlayerLayout  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLayoutProvider*>::get(),
                            "set_layout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlayerLayout>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MultiplayerLayoutProvider::get_activePlayerSpotsCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLayoutProvider*>::get(),
                            "get_activePlayerSpotsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLayoutProvider::set_activePlayerSpotsCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLayoutProvider*>::get(),
                            "set_activePlayerSpotsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLayoutProvider::add_playersLayoutWasCalculatedEvent(::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLayoutProvider*>::get(),
                            "add_playersLayoutWasCalculatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLayoutProvider::remove_playersLayoutWasCalculatedEvent(::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLayoutProvider*>::get(),
                            "remove_playersLayoutWasCalculatedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::MultiplayerPlayerLayout GlobalNamespace::MultiplayerLayoutProvider::CalculateLayout(int32_t  activePlayersCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLayoutProvider*>::get(),
                            "CalculateLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerPlayerLayout, false>(*this, ___internal_method, activePlayersCount);
}
inline ::GlobalNamespace::MultiplayerLayoutProvider* GlobalNamespace::MultiplayerLayoutProvider::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLayoutProvider*>());
}
inline void GlobalNamespace::MultiplayerLayoutProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLayoutProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
