#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TrailElementCollection_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__TrailElementCollection_def.hpp"
#include "GlobalNamespace/zzzz__TrailElement_def.hpp"
constexpr void GlobalNamespace::__TrailElementCollection__InterpolationState::__set_segmentIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__TrailElementCollection__InterpolationState::__get_segmentIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__TrailElementCollection__InterpolationState::__get_segmentIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__TrailElementCollection__InterpolationState::__set_segmentLerp(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__TrailElementCollection__InterpolationState::__get_segmentLerp()  {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::__TrailElementCollection__InterpolationState::__get_segmentLerp() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "segmentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "segmentLerp", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__TrailElementCollection__InterpolationState::__TrailElementCollection__InterpolationState(int32_t  segmentIndex, float_t  segmentLerp) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->segmentIndex = segmentIndex;
this->segmentLerp = segmentLerp;
}
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrailElementCollection::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::TrailElementCollection::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x239ec30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection.InitSnapshots
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrailElementCollection::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::TrailElementCollection::InitSnapshots)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x239ef38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(),
                            "InitSnapshots",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection.SetHeadData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrailElementCollection::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::TrailElementCollection::SetHeadData)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x239f3ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(),
                            "SetHeadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection.MoveTailToHead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrailElementCollection::*)()>(&::GlobalNamespace::TrailElementCollection::MoveTailToHead)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x239f460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(),
                            "MoveTailToHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection.UpdateDistances
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrailElementCollection::*)()>(&::GlobalNamespace::TrailElementCollection::UpdateDistances)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x239f4fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(),
                            "UpdateDistances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection.Interpolate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrailElementCollection::*)(float_t, ByRef<::GlobalNamespace::__TrailElementCollection__InterpolationState>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<float_t>)>(&::GlobalNamespace::TrailElementCollection::Interpolate)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x23a03c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(),
                            "Interpolate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__TrailElementCollection__InterpolationState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection.UpdateLerpState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrailElementCollection::*)(float_t, ByRef<::GlobalNamespace::__TrailElementCollection__InterpolationState>)>(&::GlobalNamespace::TrailElementCollection::UpdateLerpState)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x23a0988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(),
                            "UpdateLerpState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__TrailElementCollection__InterpolationState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElementCollection.GetElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::TrailElement* (::GlobalNamespace::TrailElementCollection::*)(int32_t)>(&::GlobalNamespace::TrailElementCollection::GetElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x23a0a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(),
                            "GetElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::TrailElementCollection::__set__capacity(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::TrailElementCollection::__get__capacity()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::TrailElementCollection::__get__capacity() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::TrailElementCollection::__set__snapshots(::ArrayW<::GlobalNamespace::TrailElement*,::Array<::GlobalNamespace::TrailElement*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::TrailElement*,::Array<::GlobalNamespace::TrailElement*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::TrailElement*,::Array<::GlobalNamespace::TrailElement*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::TrailElement*,::Array<::GlobalNamespace::TrailElement*>*>& GlobalNamespace::TrailElementCollection::__get__snapshots()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::TrailElement*,::Array<::GlobalNamespace::TrailElement*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::TrailElement*,::Array<::GlobalNamespace::TrailElement*>*> const& GlobalNamespace::TrailElementCollection::__get__snapshots() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::TrailElement*,::Array<::GlobalNamespace::TrailElement*>*>, 0x18>(this);
}
constexpr void GlobalNamespace::TrailElementCollection::__set__headIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::TrailElementCollection::__get__headIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& GlobalNamespace::TrailElementCollection::__get__headIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void GlobalNamespace::TrailElementCollection::__set__totalDistance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::TrailElementCollection::__get__totalDistance()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& GlobalNamespace::TrailElementCollection::__get__totalDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
inline ::GlobalNamespace::TrailElementCollection* GlobalNamespace::TrailElementCollection::New_ctor(int32_t  capacity, ::UnityEngine::Vector3  defaultStartPosition, ::UnityEngine::Vector3  defaultEndPosition, float_t  time)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TrailElementCollection*>(capacity, defaultStartPosition, defaultEndPosition, time));
}
inline void GlobalNamespace::TrailElementCollection::_ctor(int32_t  capacity, ::UnityEngine::Vector3  defaultStartPosition, ::UnityEngine::Vector3  defaultEndPosition, float_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, capacity, defaultStartPosition, defaultEndPosition, time);
}
inline void GlobalNamespace::TrailElementCollection::InitSnapshots(::UnityEngine::Vector3  defaultStartPosition, ::UnityEngine::Vector3  defaultEndPosition, float_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(),
                            "InitSnapshots",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, defaultStartPosition, defaultEndPosition, time);
}
inline void GlobalNamespace::TrailElementCollection::SetHeadData(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(),
                            "SetHeadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, start, end, time);
}
inline void GlobalNamespace::TrailElementCollection::MoveTailToHead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(),
                            "MoveTailToHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::TrailElementCollection::UpdateDistances()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(),
                            "UpdateDistances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::TrailElementCollection::Interpolate(float_t  t, ByRef<::GlobalNamespace::__TrailElementCollection__InterpolationState>  lerpState, ByRef<::UnityEngine::Vector3>  position, ByRef<::UnityEngine::Vector3>  normal, ByRef<float_t>  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(),
                            "Interpolate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__TrailElementCollection__InterpolationState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, t, lerpState, position, normal, time);
}
inline void GlobalNamespace::TrailElementCollection::UpdateLerpState(float_t  t, ByRef<::GlobalNamespace::__TrailElementCollection__InterpolationState>  interpolationState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(),
                            "UpdateLerpState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__TrailElementCollection__InterpolationState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, t, interpolationState);
}
inline ::GlobalNamespace::TrailElement* GlobalNamespace::TrailElementCollection::GetElement(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElementCollection*>::get(),
                            "GetElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TrailElement*, false>(*this, ___internal_method, index);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
