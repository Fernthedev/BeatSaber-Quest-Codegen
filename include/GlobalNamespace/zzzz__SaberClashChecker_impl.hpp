#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SaberClashChecker_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberClashChecker.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberClashChecker::*)(::GlobalNamespace::SaberManager*)>(&::GlobalNamespace::SaberClashChecker::Init)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2263c04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashChecker*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberManager*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberClashChecker.AreSabersClashing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SaberClashChecker::*)(ByRef<::UnityEngine::Vector3>)>(&::GlobalNamespace::SaberClashChecker::AreSabersClashing)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x225f95c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashChecker*>::get(),
                            "AreSabersClashing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberClashChecker.SegmentToSegmentDist
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SaberClashChecker::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>)>(&::GlobalNamespace::SaberClashChecker::SegmentToSegmentDist)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x2263c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashChecker*>::get(),
                            "SegmentToSegmentDist",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberClashChecker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberClashChecker::*)()>(&::GlobalNamespace::SaberClashChecker::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2263e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashChecker*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SaberClashChecker::__set__sabersAreClashing(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::SaberClashChecker::__get__sabersAreClashing()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::SaberClashChecker::__get__sabersAreClashing() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::SaberClashChecker::__set__clashingPoint(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x14>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SaberClashChecker::__get__clashingPoint()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x14>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SaberClashChecker::__get__clashingPoint() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x14>(this);
}
constexpr void GlobalNamespace::SaberClashChecker::__set__leftSaber(::GlobalNamespace::Saber*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Saber*, 0x20>(this, std::forward<::GlobalNamespace::Saber*>(value));
}
constexpr ::GlobalNamespace::Saber* GlobalNamespace::SaberClashChecker::__get__leftSaber()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Saber*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> GlobalNamespace::SaberClashChecker::__get__leftSaber() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Saber*, 0x20>(this);
}
constexpr void GlobalNamespace::SaberClashChecker::__set__rightSaber(::GlobalNamespace::Saber*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Saber*, 0x28>(this, std::forward<::GlobalNamespace::Saber*>(value));
}
constexpr ::GlobalNamespace::Saber* GlobalNamespace::SaberClashChecker::__get__rightSaber()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Saber*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> GlobalNamespace::SaberClashChecker::__get__rightSaber() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Saber*, 0x28>(this);
}
constexpr void GlobalNamespace::SaberClashChecker::__set__prevGetFrameNum(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::SaberClashChecker::__get__prevGetFrameNum()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& GlobalNamespace::SaberClashChecker::__get__prevGetFrameNum() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
inline void GlobalNamespace::SaberClashChecker::Init(::GlobalNamespace::SaberManager*  saberManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashChecker*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberManager*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, saberManager);
}
inline bool GlobalNamespace::SaberClashChecker::AreSabersClashing(ByRef<::UnityEngine::Vector3>  clashingPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashChecker*>::get(),
                            "AreSabersClashing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, clashingPoint);
}
inline float_t GlobalNamespace::SaberClashChecker::SegmentToSegmentDist(::UnityEngine::Vector3  fromA, ::UnityEngine::Vector3  toA, ::UnityEngine::Vector3  fromB, ::UnityEngine::Vector3  toB, ByRef<::UnityEngine::Vector3>  inbetweenPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashChecker*>::get(),
                            "SegmentToSegmentDist",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, fromA, toA, fromB, toB, inbetweenPoint);
}
inline ::GlobalNamespace::SaberClashChecker* GlobalNamespace::SaberClashChecker::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SaberClashChecker*>());
}
inline void GlobalNamespace::SaberClashChecker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashChecker*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
