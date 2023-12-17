#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "RootMotion/Demos/zzzz__Navigator_def.hpp"
#include "RootMotion/Demos/zzzz__Navigator_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshPath_def.hpp"
constexpr void RootMotion::Demos::__Navigator__State::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& RootMotion::Demos::__Navigator__State::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& RootMotion::Demos::__Navigator__State::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::Demos::__Navigator__State::__Navigator__State(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::RootMotion::Demos::__Navigator__State  RootMotion::Demos::__Navigator__State::Idle{static_cast<int32_t>(0x0)};
constexpr ::RootMotion::Demos::__Navigator__State  RootMotion::Demos::__Navigator__State::Seeking{static_cast<int32_t>(0x1)};
constexpr ::RootMotion::Demos::__Navigator__State  RootMotion::Demos::__Navigator__State::OnPath{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::RootMotion::Demos::Navigator.get_normalizedDeltaPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::Demos::Navigator::*)()>(&::RootMotion::Demos::Navigator::get_normalizedDeltaPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1240ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "get_normalizedDeltaPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator.set_normalizedDeltaPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Demos::Navigator::*)(::UnityEngine::Vector3)>(&::RootMotion::Demos::Navigator::set_normalizedDeltaPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1240ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "set_normalizedDeltaPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator.get_state
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::Demos::__Navigator__State (::RootMotion::Demos::Navigator::*)()>(&::RootMotion::Demos::Navigator::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1240acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "get_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator.set_state
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Demos::Navigator::*)(::RootMotion::Demos::__Navigator__State)>(&::RootMotion::Demos::Navigator::set_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1240ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "set_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::Demos::__Navigator__State>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator.Initiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Demos::Navigator::*)(::UnityEngine::Transform*)>(&::RootMotion::Demos::Navigator::Initiate)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1240adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Demos::Navigator::*)(::UnityEngine::Vector3)>(&::RootMotion::Demos::Navigator::Update)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x1240b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator.CalculatePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Demos::Navigator::*)(::UnityEngine::Vector3)>(&::RootMotion::Demos::Navigator::CalculatePath)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x12410ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "CalculatePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::Demos::Navigator::*)(::UnityEngine::Vector3)>(&::RootMotion::Demos::Navigator::Find)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1241110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator.Stop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Demos::Navigator::*)()>(&::RootMotion::Demos::Navigator::Stop)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1240fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator.HorDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::Demos::Navigator::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::Demos::Navigator::HorDistance)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1241030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "HorDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator.Visualize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Demos::Navigator::*)()>(&::RootMotion::Demos::Navigator::Visualize)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x1241244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "Visualize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Demos::Navigator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Demos::Navigator::*)()>(&::RootMotion::Demos::Navigator::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1241408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::Demos::Navigator::__set_activeTargetSeeking(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::Demos::Navigator::__get_activeTargetSeeking()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& RootMotion::Demos::Navigator::__get_activeTargetSeeking() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void RootMotion::Demos::Navigator::__set_cornerRadius(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::Demos::Navigator::__get_cornerRadius()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& RootMotion::Demos::Navigator::__get_cornerRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void RootMotion::Demos::Navigator::__set_recalculateOnPathDistance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::Demos::Navigator::__get_recalculateOnPathDistance()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& RootMotion::Demos::Navigator::__get_recalculateOnPathDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void RootMotion::Demos::Navigator::__set_maxSampleDistance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::Demos::Navigator::__get_maxSampleDistance()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& RootMotion::Demos::Navigator::__get_maxSampleDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void RootMotion::Demos::Navigator::__set_nextPathInterval(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::Demos::Navigator::__get_nextPathInterval()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& RootMotion::Demos::Navigator::__get_nextPathInterval() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void RootMotion::Demos::Navigator::__set__normalizedDeltaPosition_k__BackingField(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x24>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::Demos::Navigator::__get__normalizedDeltaPosition_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x24>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::Demos::Navigator::__get__normalizedDeltaPosition_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x24>(this);
}
constexpr void RootMotion::Demos::Navigator::__set__state_k__BackingField(::RootMotion::Demos::__Navigator__State  value)  {
::cordl_internals::setInstanceField<::RootMotion::Demos::__Navigator__State, 0x30>(this, std::forward<::RootMotion::Demos::__Navigator__State>(value));
}
constexpr ::RootMotion::Demos::__Navigator__State& RootMotion::Demos::Navigator::__get__state_k__BackingField()  {
return ::cordl_internals::getInstanceField<::RootMotion::Demos::__Navigator__State, 0x30>(this);
}
constexpr ::RootMotion::Demos::__Navigator__State const& RootMotion::Demos::Navigator::__get__state_k__BackingField() const {
return ::cordl_internals::getInstanceField<::RootMotion::Demos::__Navigator__State, 0x30>(this);
}
constexpr void RootMotion::Demos::Navigator::__set_transform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x38>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* RootMotion::Demos::Navigator::__get_transform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> RootMotion::Demos::Navigator::__get_transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x38>(this);
}
constexpr void RootMotion::Demos::Navigator::__set_cornerIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
constexpr int32_t& RootMotion::Demos::Navigator::__get_cornerIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr int32_t const& RootMotion::Demos::Navigator::__get_cornerIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr void RootMotion::Demos::Navigator::__set_corners(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x48>(this, std::forward<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& RootMotion::Demos::Navigator::__get_corners()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x48>(this);
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& RootMotion::Demos::Navigator::__get_corners() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x48>(this);
}
constexpr void RootMotion::Demos::Navigator::__set_path(::UnityEngine::AI::NavMeshPath*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AI::NavMeshPath*, 0x50>(this, std::forward<::UnityEngine::AI::NavMeshPath*>(value));
}
constexpr ::UnityEngine::AI::NavMeshPath* RootMotion::Demos::Navigator::__get_path()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AI::NavMeshPath*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AI::NavMeshPath*> RootMotion::Demos::Navigator::__get_path() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AI::NavMeshPath*, 0x50>(this);
}
constexpr void RootMotion::Demos::Navigator::__set_lastTargetPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x58>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& RootMotion::Demos::Navigator::__get_lastTargetPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x58>(this);
}
constexpr ::UnityEngine::Vector3 const& RootMotion::Demos::Navigator::__get_lastTargetPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x58>(this);
}
constexpr void RootMotion::Demos::Navigator::__set_initiated(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x64>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::Demos::Navigator::__get_initiated()  {
return ::cordl_internals::getInstanceField<bool, 0x64>(this);
}
constexpr bool const& RootMotion::Demos::Navigator::__get_initiated() const {
return ::cordl_internals::getInstanceField<bool, 0x64>(this);
}
constexpr void RootMotion::Demos::Navigator::__set_nextPathTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::Demos::Navigator::__get_nextPathTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this);
}
constexpr float_t const& RootMotion::Demos::Navigator::__get_nextPathTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this);
}
inline ::UnityEngine::Vector3 RootMotion::Demos::Navigator::get_normalizedDeltaPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "get_normalizedDeltaPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline void RootMotion::Demos::Navigator::set_normalizedDeltaPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "set_normalizedDeltaPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::RootMotion::Demos::__Navigator__State RootMotion::Demos::Navigator::get_state()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "get_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::Demos::__Navigator__State, false>(*this, ___internal_method);
}
inline void RootMotion::Demos::Navigator::set_state(::RootMotion::Demos::__Navigator__State  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "set_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::Demos::__Navigator__State>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void RootMotion::Demos::Navigator::Initiate(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, transform);
}
inline void RootMotion::Demos::Navigator::Update(::UnityEngine::Vector3  targetPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, targetPosition);
}
inline void RootMotion::Demos::Navigator::CalculatePath(::UnityEngine::Vector3  targetPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "CalculatePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, targetPosition);
}
inline bool RootMotion::Demos::Navigator::Find(::UnityEngine::Vector3  targetPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, targetPosition);
}
inline void RootMotion::Demos::Navigator::Stop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline float_t RootMotion::Demos::Navigator::HorDistance(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "HorDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, p1, p2);
}
inline void RootMotion::Demos::Navigator::Visualize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            "Visualize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::RootMotion::Demos::Navigator* RootMotion::Demos::Navigator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::Demos::Navigator*>());
}
inline void RootMotion::Demos::Navigator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Demos::Navigator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
