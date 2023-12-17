#pragma once
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__State_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__DrawParams_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandType_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshHandle_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChainCommand::*)()>(&::UnityEngine::UIElements::UIR::RenderChainCommand::Reset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2dd54f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand.ExecuteNonDrawMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChainCommand::*)(::UnityEngine::UIElements::UIR::DrawParams*, float_t, ByRef<::System::Exception*>)>(&::UnityEngine::UIElements::UIR::RenderChainCommand::ExecuteNonDrawMesh)> {
  constexpr static std::size_t size = 0xbbc;
  constexpr static std::size_t addrs = 0x2dd3c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                            "ExecuteNonDrawMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::DrawParams*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Exception*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand.Blit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChainCommand::*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, float_t)>(&::UnityEngine::UIElements::UIR::RenderChainCommand::Blit)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2dd5ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                            "Blit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand.CombineScissorRects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(&::UnityEngine::UIElements::UIR::RenderChainCommand::CombineScissorRects)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2dd5920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                            "CombineScissorRects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand.RectPointsToPixelsAndFlipYAxis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectInt (*)(::UnityEngine::Rect, float_t)>(&::UnityEngine::UIElements::UIR::RenderChainCommand::RectPointsToPixelsAndFlipYAxis)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x2dd551c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                            "RectPointsToPixelsAndFlipYAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChainCommand::*)()>(&::UnityEngine::UIElements::UIR::RenderChainCommand::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2dd5c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__set_owner(::UnityEngine::UIElements::VisualElement*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement*, 0x18>(this, std::forward<::UnityEngine::UIElements::VisualElement*>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::UIR::RenderChainCommand::__get_owner()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> UnityEngine::UIElements::UIR::RenderChainCommand::__get_owner() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x18>(this);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__set_prev(::UnityEngine::UIElements::UIR::RenderChainCommand*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::RenderChainCommand*, 0x20>(this, std::forward<::UnityEngine::UIElements::UIR::RenderChainCommand*>(value));
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::RenderChainCommand::__get_prev()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::RenderChainCommand*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::RenderChainCommand*> UnityEngine::UIElements::UIR::RenderChainCommand::__get_prev() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::RenderChainCommand*, 0x20>(this);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__set_next(::UnityEngine::UIElements::UIR::RenderChainCommand*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::RenderChainCommand*, 0x28>(this, std::forward<::UnityEngine::UIElements::UIR::RenderChainCommand*>(value));
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::RenderChainCommand::__get_next()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::RenderChainCommand*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::RenderChainCommand*> UnityEngine::UIElements::UIR::RenderChainCommand::__get_next() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::RenderChainCommand*, 0x28>(this);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__set_closing(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::UIR::RenderChainCommand::__get_closing()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderChainCommand::__get_closing() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__set_type(::UnityEngine::UIElements::UIR::CommandType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::CommandType, 0x34>(this, std::forward<::UnityEngine::UIElements::UIR::CommandType>(value));
}
constexpr ::UnityEngine::UIElements::UIR::CommandType& UnityEngine::UIElements::UIR::RenderChainCommand::__get_type()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::CommandType, 0x34>(this);
}
constexpr ::UnityEngine::UIElements::UIR::CommandType const& UnityEngine::UIElements::UIR::RenderChainCommand::__get_type() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::CommandType, 0x34>(this);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__set_state(::UnityEngine::UIElements::UIR::State  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::State, 0x38>(this, std::forward<::UnityEngine::UIElements::UIR::State>(value));
}
constexpr ::UnityEngine::UIElements::UIR::State& UnityEngine::UIElements::UIR::RenderChainCommand::__get_state()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::State, 0x38>(this);
}
constexpr ::UnityEngine::UIElements::UIR::State const& UnityEngine::UIElements::UIR::RenderChainCommand::__get_state() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::State, 0x38>(this);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__set_mesh(::UnityEngine::UIElements::UIR::MeshHandle*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::MeshHandle*, 0x58>(this, std::forward<::UnityEngine::UIElements::UIR::MeshHandle*>(value));
}
constexpr ::UnityEngine::UIElements::UIR::MeshHandle* UnityEngine::UIElements::UIR::RenderChainCommand::__get_mesh()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::MeshHandle*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::MeshHandle*> UnityEngine::UIElements::UIR::RenderChainCommand::__get_mesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::MeshHandle*, 0x58>(this);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__set_indexOffset(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::UIR::RenderChainCommand::__get_indexOffset()  {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
constexpr int32_t const& UnityEngine::UIElements::UIR::RenderChainCommand::__get_indexOffset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__set_indexCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x64>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::UIR::RenderChainCommand::__get_indexCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x64>(this);
}
constexpr int32_t const& UnityEngine::UIElements::UIR::RenderChainCommand::__get_indexCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x64>(this);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__set_callback(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x68>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* UnityEngine::UIElements::UIR::RenderChainCommand::__get_callback()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> UnityEngine::UIElements::UIR::RenderChainCommand::__get_callback() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x68>(this);
}
inline void UnityEngine::UIElements::UIR::RenderChainCommand::setStaticF_k_ID_MainTex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "k_ID_MainTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIR::RenderChainCommand::getStaticF_k_ID_MainTex()  {
return ::cordl_internals::getStaticField<int32_t, "k_ID_MainTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChainCommand::setStaticF_s_ImmediateOverheadMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ImmediateOverheadMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChainCommand::getStaticF_s_ImmediateOverheadMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ImmediateOverheadMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChainCommand::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChainCommand::ExecuteNonDrawMesh(::UnityEngine::UIElements::UIR::DrawParams*  drawParams, float_t  pixelsPerPoint, ByRef<::System::Exception*>  immediateException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                            "ExecuteNonDrawMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::DrawParams*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Exception*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, drawParams, pixelsPerPoint, immediateException);
}
inline void UnityEngine::UIElements::UIR::RenderChainCommand::Blit(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  destination, float_t  depth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                            "Blit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source, destination, depth);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::UIR::RenderChainCommand::CombineScissorRects(::UnityEngine::Rect  r0, ::UnityEngine::Rect  r1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                            "CombineScissorRects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(nullptr, ___internal_method, r0, r1);
}
inline ::UnityEngine::RectInt UnityEngine::UIElements::UIR::RenderChainCommand::RectPointsToPixelsAndFlipYAxis(::UnityEngine::Rect  rect, float_t  pixelsPerPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                            "RectPointsToPixelsAndFlipYAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectInt, false>(nullptr, ___internal_method, rect, pixelsPerPoint);
}
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::RenderChainCommand::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UIR::RenderChainCommand*>());
}
inline void UnityEngine::UIElements::UIR::RenderChainCommand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
