#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerEnvironmentResizeController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerEnvironmentResizeController_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerCenterResizeController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnCenter_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
constexpr void GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType::__MultiplayerEnvironmentResizeController__ResizeType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType  GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType  GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType::Position{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType  GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType::Length{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData.get_resizeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType (::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::*)()>(&::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_resizeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224c89c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                            "get_resizeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData.get_offset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::*)()>(&::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224c8a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                            "get_offset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData.get_lights
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> (::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::*)()>(&::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_lights)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224c8ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                            "get_lights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData.get_otherTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*> (::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::*)()>(&::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_otherTransforms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224c8b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                            "get_otherTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::*)()>(&::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224c8bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__set__resizeType(::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType, 0x10>(this, std::forward<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType>(value));
}
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__get__resizeType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType, 0x10>(this);
}
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType const& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__get__resizeType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType, 0x10>(this);
}
constexpr void GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__set__offset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__get__offset()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__get__offset() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__set__lights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__get__lights()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> const& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__get__lights() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>, 0x18>(this);
}
constexpr void GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__set__otherTransforms(::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>, 0x20>(this, std::forward<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__get__otherTransforms()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>, 0x20>(this);
}
constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*> const& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__get__otherTransforms() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>, 0x20>(this);
}
inline ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_resizeType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                            "get_resizeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_offset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                            "get_offset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_lights()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                            "get_lights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>, false>(*this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*> GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_otherTransforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                            "get_otherTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData* GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>());
}
inline void GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.get_isResizingFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::get_isResizingFinished)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224c298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                            "get_isResizingFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.add_resizingDidFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)(::System::Action*)>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::add_resizingDidFinishEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x224c2a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                            "add_resizingDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.remove_resizingDidFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)(::System::Action*)>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::remove_resizingDidFinishEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x224c33c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                            "remove_resizingDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::Start)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x224c3d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::OnDestroy)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x224c544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.HandleEdgeDistanceFromCenterWasCalculated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)(float_t)>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::HandleEdgeDistanceFromCenterWasCalculated)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x224c514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                            "HandleEdgeDistanceFromCenterWasCalculated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.HandleSpawnCenterDistanceWasFound
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)(float_t)>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::HandleSpawnCenterDistanceWasFound)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x224c52c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                            "HandleSpawnCenterDistanceWasFound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.TryResize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::TryResize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x224c694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                            "TryResize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.Resize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::Resize)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x224c6ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224c894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set__platformEnd(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x18>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::MultiplayerEnvironmentResizeController::__get__platformEnd()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::MultiplayerEnvironmentResizeController::__get__platformEnd() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set__resizeData(::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*,::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*,::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*>, 0x20>(this, std::forward<::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*,::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*,::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*>& GlobalNamespace::MultiplayerEnvironmentResizeController::__get__resizeData()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*,::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*>, 0x20>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*,::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*> const& GlobalNamespace::MultiplayerEnvironmentResizeController::__get__resizeData() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*,::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*>, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set__centerResizeController(::GlobalNamespace::MultiplayerCenterResizeController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerCenterResizeController*, 0x28>(this, std::forward<::GlobalNamespace::MultiplayerCenterResizeController*>(value));
}
constexpr ::GlobalNamespace::MultiplayerCenterResizeController* GlobalNamespace::MultiplayerEnvironmentResizeController::__get__centerResizeController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerCenterResizeController*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerCenterResizeController*> GlobalNamespace::MultiplayerEnvironmentResizeController::__get__centerResizeController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerCenterResizeController*, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set__beatmapObjectSpawnCenter(::GlobalNamespace::BeatmapObjectSpawnCenter*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapObjectSpawnCenter*, 0x30>(this, std::forward<::GlobalNamespace::BeatmapObjectSpawnCenter*>(value));
}
constexpr ::GlobalNamespace::BeatmapObjectSpawnCenter* GlobalNamespace::MultiplayerEnvironmentResizeController::__get__beatmapObjectSpawnCenter()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectSpawnCenter*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectSpawnCenter*> GlobalNamespace::MultiplayerEnvironmentResizeController::__get__beatmapObjectSpawnCenter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectSpawnCenter*, 0x30>(this);
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set_resizingDidFinishEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x38>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::MultiplayerEnvironmentResizeController::__get_resizingDidFinishEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::MultiplayerEnvironmentResizeController::__get_resizingDidFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x38>(this);
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set__isResizingFinished(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MultiplayerEnvironmentResizeController::__get__isResizingFinished()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& GlobalNamespace::MultiplayerEnvironmentResizeController::__get__isResizingFinished() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set__edgeDistanceFromCenterFound(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x41>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MultiplayerEnvironmentResizeController::__get__edgeDistanceFromCenterFound()  {
return ::cordl_internals::getInstanceField<bool, 0x41>(this);
}
constexpr bool const& GlobalNamespace::MultiplayerEnvironmentResizeController::__get__edgeDistanceFromCenterFound() const {
return ::cordl_internals::getInstanceField<bool, 0x41>(this);
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set__spawnCenterDistanceFound(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x42>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MultiplayerEnvironmentResizeController::__get__spawnCenterDistanceFound()  {
return ::cordl_internals::getInstanceField<bool, 0x42>(this);
}
constexpr bool const& GlobalNamespace::MultiplayerEnvironmentResizeController::__get__spawnCenterDistanceFound() const {
return ::cordl_internals::getInstanceField<bool, 0x42>(this);
}
inline bool GlobalNamespace::MultiplayerEnvironmentResizeController::get_isResizingFinished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                            "get_isResizingFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::add_resizingDidFinishEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                            "add_resizingDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::remove_resizingDidFinishEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                            "remove_resizingDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::HandleEdgeDistanceFromCenterWasCalculated(float_t  edgeDistanceFromCenter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                            "HandleEdgeDistanceFromCenterWasCalculated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, edgeDistanceFromCenter);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::HandleSpawnCenterDistanceWasFound(float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                            "HandleSpawnCenterDistanceWasFound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, distance);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::TryResize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                            "TryResize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::Resize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerEnvironmentResizeController* GlobalNamespace::MultiplayerEnvironmentResizeController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerEnvironmentResizeController*>());
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
