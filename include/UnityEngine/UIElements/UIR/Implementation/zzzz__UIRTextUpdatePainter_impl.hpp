#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__UIRTextUpdatePainter_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRenderDevice_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContextUtils_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStylePainter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter.get_meshGenerationContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshGenerationContext* (::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::get_meshGenerationContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ddf198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(),
                            "get_meshGenerationContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ddf1a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter.Begin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::UIRenderDevice*)>(&::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::Begin)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x2ddf210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(),
                            "Begin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter.End
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::End)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2ddf454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(),
                            "End",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::Dispose)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2ddf4e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter.DrawRectangle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::*)(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams)>(&::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::DrawRectangle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ddf5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(),
                            "DrawRectangle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter.DrawImmediate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::*)(::System::Action*, bool)>(&::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::DrawImmediate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ddf5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(),
                            "DrawImmediate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter.DrawText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::*)(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, ::UnityEngine::UIElements::ITextHandle*, float_t)>(&::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::DrawText)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x2ddf5ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(),
                            "DrawText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::IStylePainter"
constexpr  UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::operator ::UnityEngine::UIElements::IStylePainter*() noexcept {
return static_cast<::UnityEngine::UIElements::IStylePainter*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__set_m_CurrentElement(::UnityEngine::UIElements::VisualElement*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement*, 0x10>(this, std::forward<::UnityEngine::UIElements::VisualElement*>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__get_m_CurrentElement()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__get_m_CurrentElement() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x10>(this);
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__set_m_TextEntryIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__get_m_TextEntryIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__get_m_TextEntryIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__set_m_DudVerts(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>, 0x20>(this, std::forward<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__get_m_DudVerts()  {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>, 0x20>(this);
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex> const& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__get_m_DudVerts() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>, 0x20>(this);
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__set_m_DudIndices(::Unity::Collections::NativeArray_1<uint16_t>  value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<uint16_t>, 0x30>(this, std::forward<::Unity::Collections::NativeArray_1<uint16_t>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<uint16_t>& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__get_m_DudIndices()  {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<uint16_t>, 0x30>(this);
}
constexpr ::Unity::Collections::NativeArray_1<uint16_t> const& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__get_m_DudIndices() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<uint16_t>, 0x30>(this);
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__set_m_MeshDataVerts(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>  value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, 0x40>(this, std::forward<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>(value));
}
constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__get_m_MeshDataVerts()  {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, 0x40>(this);
}
constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> const& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__get_m_MeshDataVerts() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, 0x40>(this);
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__set_m_XFormClipPages(::UnityEngine::Color32  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x50>(this, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__get_m_XFormClipPages()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x50>(this);
}
constexpr ::UnityEngine::Color32 const& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__get_m_XFormClipPages() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x50>(this);
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__set_m_IDs(::UnityEngine::Color32  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x54>(this, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__get_m_IDs()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x54>(this);
}
constexpr ::UnityEngine::Color32 const& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__get_m_IDs() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x54>(this);
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__set_m_Flags(::UnityEngine::Color32  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x58>(this, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__get_m_Flags()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x58>(this);
}
constexpr ::UnityEngine::Color32 const& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__get_m_Flags() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x58>(this);
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__set_m_OpacityColorPages(::UnityEngine::Color32  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x5c>(this, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__get_m_OpacityColorPages()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x5c>(this);
}
constexpr ::UnityEngine::Color32 const& UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__get_m_OpacityColorPages() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x5c>(this);
}
constexpr void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__set__meshGenerationContext_k__BackingField(::UnityEngine::UIElements::MeshGenerationContext*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::MeshGenerationContext*, 0x60>(this, std::forward<::UnityEngine::UIElements::MeshGenerationContext*>(value));
}
constexpr ::UnityEngine::UIElements::MeshGenerationContext* UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__get__meshGenerationContext_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::MeshGenerationContext*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::MeshGenerationContext*> UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::__get__meshGenerationContext_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::MeshGenerationContext*, 0x60>(this);
}
inline ::UnityEngine::UIElements::MeshGenerationContext* UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::get_meshGenerationContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(),
                            "get_meshGenerationContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshGenerationContext*, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter* UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>());
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::Begin(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::UIR::UIRenderDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(),
                            "Begin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::UIRenderDevice*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ve, device);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::End()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(),
                            "End",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::DrawRectangle(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams  rectParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(),
                            "DrawRectangle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, rectParams);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::DrawImmediate(::System::Action*  callback, bool  cullingEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(),
                            "DrawImmediate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, callback, cullingEnabled);
}
inline void UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter::DrawText(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams  textParams, ::UnityEngine::UIElements::ITextHandle*  handle, float_t  pixelsPerPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter*>::get(),
                            "DrawText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, textParams, handle, pixelsPerPoint);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
