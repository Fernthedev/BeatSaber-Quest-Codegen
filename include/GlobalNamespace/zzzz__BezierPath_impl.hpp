#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BezierPath_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__BezierPath_def.hpp"
constexpr void GlobalNamespace::__BezierPath__ControlMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BezierPath__ControlMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__BezierPath__ControlMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BezierPath__ControlMode::__BezierPath__ControlMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__BezierPath__ControlMode  GlobalNamespace::__BezierPath__ControlMode::Aligned{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__BezierPath__ControlMode  GlobalNamespace::__BezierPath__ControlMode::Mirrored{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__BezierPath__ControlMode  GlobalNamespace::__BezierPath__ControlMode::Free{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__BezierPath__ControlMode  GlobalNamespace::__BezierPath__ControlMode::Automatic{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.get_controlPointMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BezierPath__ControlMode (::GlobalNamespace::BezierPath::*)()>(&::GlobalNamespace::BezierPath::get_controlPointMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2309be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "get_controlPointMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.set_controlPointMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierPath::*)(::GlobalNamespace::__BezierPath__ControlMode)>(&::GlobalNamespace::BezierPath::set_controlPointMode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2309be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "set_controlPointMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BezierPath__ControlMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.add_bezierPathWasModifiedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierPath::*)(::System::Action*)>(&::GlobalNamespace::BezierPath::add_bezierPathWasModifiedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2309cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "add_bezierPathWasModifiedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.remove_bezierPathWasModifiedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierPath::*)(::System::Action*)>(&::GlobalNamespace::BezierPath::remove_bezierPathWasModifiedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2309d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "remove_bezierPathWasModifiedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.get_pointsCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BezierPath::*)()>(&::GlobalNamespace::BezierPath::get_pointsCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2309e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "get_pointsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.get_anchorPointsCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BezierPath::*)()>(&::GlobalNamespace::BezierPath::get_anchorPointsCount)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2309e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "get_anchorPointsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.get_segmentsCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BezierPath::*)()>(&::GlobalNamespace::BezierPath::get_segmentsCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2309eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "get_segmentsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierPath::*)(::UnityEngine::Vector3, bool)>(&::GlobalNamespace::BezierPath::_ctor)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x2309f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.UpdateByAnchorPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierPath::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*)>(&::GlobalNamespace::BezierPath::UpdateByAnchorPoints)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x230a458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "UpdateByAnchorPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.UpdateControlPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierPath::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*)>(&::GlobalNamespace::BezierPath::UpdateControlPoints)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x230af70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "UpdateControlPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BezierPath::*)(int32_t)>(&::GlobalNamespace::BezierPath::get_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x230b2a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.GetPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BezierPath::*)(int32_t)>(&::GlobalNamespace::BezierPath::GetPoint)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x230b2ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "GetPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.SetPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierPath::*)(int32_t, ::UnityEngine::Vector3, bool)>(&::GlobalNamespace::BezierPath::SetPoint)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x230b1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "SetPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.AddSegmentToEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierPath::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::BezierPath::AddSegmentToEnd)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x230aa60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "AddSegmentToEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.GetPointsInSegment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierPath::*)(int32_t, ByRef<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>)>(&::GlobalNamespace::BezierPath::GetPointsInSegment)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x230b390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "GetPointsInSegment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.GetPointsInSegment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierPath::*)(int32_t, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&::GlobalNamespace::BezierPath::GetPointsInSegment)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x230b428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "GetPointsInSegment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.GetAnchorNormalAngle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BezierPath::*)(int32_t)>(&::GlobalNamespace::BezierPath::GetAnchorNormalAngle)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x230b520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "GetAnchorNormalAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.SetAnchorNormalAngle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierPath::*)(int32_t, float_t)>(&::GlobalNamespace::BezierPath::SetAnchorNormalAngle)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x230b584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "SetAnchorNormalAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.AutoSetAllAffectedControlPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierPath::*)(int32_t)>(&::GlobalNamespace::BezierPath::AutoSetAllAffectedControlPoints)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x230b304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "AutoSetAllAffectedControlPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.AutoSetAllControlPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierPath::*)()>(&::GlobalNamespace::BezierPath::AutoSetAllControlPoints)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2309c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "AutoSetAllControlPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.AutoSetAnchorControlPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierPath::*)(int32_t)>(&::GlobalNamespace::BezierPath::AutoSetAnchorControlPoints)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x230b718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "AutoSetAnchorControlPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.AutoSetStartAndEndControls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierPath::*)()>(&::GlobalNamespace::BezierPath::AutoSetStartAndEndControls)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x230bc08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "AutoSetStartAndEndControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.LoopIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BezierPath::*)(int32_t)>(&::GlobalNamespace::BezierPath::LoopIndex)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x230b6c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "LoopIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierPath.NotifyPathModified
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierPath::*)()>(&::GlobalNamespace::BezierPath::NotifyPathModified)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2309cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "NotifyPathModified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BezierPath::__set_bezierPathWasModifiedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x10>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::BezierPath::__get_bezierPathWasModifiedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::BezierPath::__get_bezierPathWasModifiedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x10>(this);
}
constexpr void GlobalNamespace::BezierPath::__set__points(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GlobalNamespace::BezierPath::__get__points()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> GlobalNamespace::BezierPath::__get__points() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, 0x18>(this);
}
constexpr void GlobalNamespace::BezierPath::__set__controlMode(::GlobalNamespace::__BezierPath__ControlMode  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BezierPath__ControlMode, 0x20>(this, std::forward<::GlobalNamespace::__BezierPath__ControlMode>(value));
}
constexpr ::GlobalNamespace::__BezierPath__ControlMode& GlobalNamespace::BezierPath::__get__controlMode()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BezierPath__ControlMode, 0x20>(this);
}
constexpr ::GlobalNamespace::__BezierPath__ControlMode const& GlobalNamespace::BezierPath::__get__controlMode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BezierPath__ControlMode, 0x20>(this);
}
constexpr void GlobalNamespace::BezierPath::__set__perAnchorNormalsAngle(::System::Collections::Generic::List_1<float_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<float_t>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<float_t>*>(value));
}
constexpr ::System::Collections::Generic::List_1<float_t>* GlobalNamespace::BezierPath::__get__perAnchorNormalsAngle()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<float_t>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<float_t>*> GlobalNamespace::BezierPath::__get__perAnchorNormalsAngle() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<float_t>*, 0x28>(this);
}
constexpr void GlobalNamespace::BezierPath::__set__neighbourDistances(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x30>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& GlobalNamespace::BezierPath::__get__neighbourDistances()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x30>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& GlobalNamespace::BezierPath::__get__neighbourDistances() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x30>(this);
}
inline ::GlobalNamespace::__BezierPath__ControlMode GlobalNamespace::BezierPath::get_controlPointMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "get_controlPointMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BezierPath__ControlMode, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BezierPath::set_controlPointMode(::GlobalNamespace::__BezierPath__ControlMode  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "set_controlPointMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BezierPath__ControlMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::BezierPath::add_bezierPathWasModifiedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "add_bezierPathWasModifiedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::BezierPath::remove_bezierPathWasModifiedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "remove_bezierPathWasModifiedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::BezierPath::get_pointsCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "get_pointsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::BezierPath::get_anchorPointsCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "get_anchorPointsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::BezierPath::get_segmentsCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "get_segmentsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
/// @param initTwoSegments: bool (default: false)
inline ::GlobalNamespace::BezierPath* GlobalNamespace::BezierPath::New_ctor(::UnityEngine::Vector3  centre, bool  initTwoSegments)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BezierPath*>(centre, initTwoSegments));
}
/// @param initTwoSegments: bool (default: false)
inline void GlobalNamespace::BezierPath::_ctor(::UnityEngine::Vector3  centre, bool  initTwoSegments)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, centre, initTwoSegments);
}
inline void GlobalNamespace::BezierPath::UpdateByAnchorPoints(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*  points)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "UpdateByAnchorPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, points);
}
inline void GlobalNamespace::BezierPath::UpdateControlPoints(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*  points)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "UpdateControlPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, points);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BezierPath::get_Item(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method, i);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BezierPath::GetPoint(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "GetPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method, i);
}
/// @param suppressPathModified: bool (default: false)
inline void GlobalNamespace::BezierPath::SetPoint(int32_t  i, ::UnityEngine::Vector3  localPosition, bool  suppressPathModified)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "SetPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, i, localPosition, suppressPathModified);
}
inline void GlobalNamespace::BezierPath::AddSegmentToEnd(::UnityEngine::Vector3  anchorPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "AddSegmentToEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, anchorPos);
}
inline void GlobalNamespace::BezierPath::GetPointsInSegment(int32_t  segmentIndex, ByRef<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>  points)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "GetPointsInSegment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, segmentIndex, points);
}
inline void GlobalNamespace::BezierPath::GetPointsInSegment(int32_t  segmentIndex, ByRef<::UnityEngine::Vector3>  p0, ByRef<::UnityEngine::Vector3>  p1, ByRef<::UnityEngine::Vector3>  p2, ByRef<::UnityEngine::Vector3>  p3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "GetPointsInSegment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, segmentIndex, p0, p1, p2, p3);
}
inline float_t GlobalNamespace::BezierPath::GetAnchorNormalAngle(int32_t  anchorIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "GetAnchorNormalAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, anchorIndex);
}
inline void GlobalNamespace::BezierPath::SetAnchorNormalAngle(int32_t  anchorIndex, float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "SetAnchorNormalAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, anchorIndex, angle);
}
inline void GlobalNamespace::BezierPath::AutoSetAllAffectedControlPoints(int32_t  updatedAnchorIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "AutoSetAllAffectedControlPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, updatedAnchorIndex);
}
inline void GlobalNamespace::BezierPath::AutoSetAllControlPoints()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "AutoSetAllControlPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BezierPath::AutoSetAnchorControlPoints(int32_t  anchorIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "AutoSetAnchorControlPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, anchorIndex);
}
inline void GlobalNamespace::BezierPath::AutoSetStartAndEndControls()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "AutoSetStartAndEndControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::BezierPath::LoopIndex(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "LoopIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, i);
}
inline void GlobalNamespace::BezierPath::NotifyPathModified()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierPath*>::get(),
                            "NotifyPathModified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
