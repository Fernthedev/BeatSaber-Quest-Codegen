#pragma once
#include "TMPro/zzzz__TextMeshProUGUI_impl.hpp"
#include "HMUI/zzzz__CurvedTextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "HMUI/zzzz__CurvedTextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "HMUI/zzzz__CurvedCanvasSettingsHelper_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__IComponentRefresher_def.hpp"
constexpr void HMUI::__CurvedTextMeshPro__CurvedMeshInfo::__set_uvs3(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>& HMUI::__CurvedTextMeshPro__CurvedMeshInfo::__get_uvs3()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> const& HMUI::__CurvedTextMeshPro__CurvedMeshInfo::__get_uvs3() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "uvs3", ty: "::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::HMUI::__CurvedTextMeshPro__CurvedMeshInfo::__CurvedTextMeshPro__CurvedMeshInfo(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  uvs3) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->uvs3 = uvs3;
}
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.get_useScriptableObjectColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::CurvedTextMeshPro::*)()>(&::HMUI::CurvedTextMeshPro::get_useScriptableObjectColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211b864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                            "get_useScriptableObjectColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.set_useScriptableObjectColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CurvedTextMeshPro::*)(bool)>(&::HMUI::CurvedTextMeshPro::set_useScriptableObjectColors)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x211b86c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                            "set_useScriptableObjectColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.get_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::HMUI::CurvedTextMeshPro::*)()>(&::HMUI::CurvedTextMeshPro::get_color)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x211b878;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.set_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CurvedTextMeshPro::*)(::UnityEngine::Color)>(&::HMUI::CurvedTextMeshPro::set_color)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211b908;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CurvedTextMeshPro::*)()>(&::HMUI::CurvedTextMeshPro::OnEnable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x211b910;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.GenerateTextMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CurvedTextMeshPro::*)()>(&::HMUI::CurvedTextMeshPro::GenerateTextMesh)> {
  constexpr static std::size_t size = 0x7b4;
  constexpr static std::size_t addrs = 0x211b944;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                                  142
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.__Refresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CurvedTextMeshPro::*)()>(&::HMUI::CurvedTextMeshPro::__Refresh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x211c1a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                            "__Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.UpdateMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CurvedTextMeshPro::*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::Vector2, ::UnityEngine::Color32)>(&::HMUI::CurvedTextMeshPro::UpdateMesh)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x211c0f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                            "UpdateMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.FillUV3s
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> (::HMUI::CurvedTextMeshPro::*)(int32_t, int32_t, ::UnityEngine::Vector2)>(&::HMUI::CurvedTextMeshPro::FillUV3s)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x211c1b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                            "FillUV3s",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro.FillColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> (::HMUI::CurvedTextMeshPro::*)(int32_t, ::UnityEngine::Color32)>(&::HMUI::CurvedTextMeshPro::FillColors)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x211c290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                            "FillColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedTextMeshPro._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CurvedTextMeshPro::*)()>(&::HMUI::CurvedTextMeshPro::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x211c304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IComponentRefresher"
constexpr  HMUI::CurvedTextMeshPro::operator ::GlobalNamespace::IComponentRefresher*() noexcept {
return static_cast<::GlobalNamespace::IComponentRefresher*>(static_cast<void*>(this));
}
constexpr void HMUI::CurvedTextMeshPro::__set__useScriptableObjectColors(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x795>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::CurvedTextMeshPro::__get__useScriptableObjectColors()  {
return ::cordl_internals::getInstanceField<bool, 0x795>(this);
}
constexpr bool const& HMUI::CurvedTextMeshPro::__get__useScriptableObjectColors() const {
return ::cordl_internals::getInstanceField<bool, 0x795>(this);
}
constexpr void HMUI::CurvedTextMeshPro::__set__colorSo(::GlobalNamespace::ColorSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorSO*, 0x798>(this, std::forward<::GlobalNamespace::ColorSO*>(value));
}
constexpr ::GlobalNamespace::ColorSO* HMUI::CurvedTextMeshPro::__get__colorSo()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x798>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> HMUI::CurvedTextMeshPro::__get__colorSo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x798>(this);
}
constexpr void HMUI::CurvedTextMeshPro::__set__curvedMeshInfos(::ArrayW<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo,::Array<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo,::Array<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo>*>, 0x7a0>(this, std::forward<::ArrayW<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo,::Array<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo>*>>(value));
}
constexpr ::ArrayW<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo,::Array<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo>*>& HMUI::CurvedTextMeshPro::__get__curvedMeshInfos()  {
return ::cordl_internals::getInstanceField<::ArrayW<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo,::Array<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo>*>, 0x7a0>(this);
}
constexpr ::ArrayW<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo,::Array<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo>*> const& HMUI::CurvedTextMeshPro::__get__curvedMeshInfos() const {
return ::cordl_internals::getInstanceField<::ArrayW<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo,::Array<::HMUI::__CurvedTextMeshPro__CurvedMeshInfo>*>, 0x7a0>(this);
}
constexpr void HMUI::CurvedTextMeshPro::__set__curvedCanvasSettingsHelper(::HMUI::CurvedCanvasSettingsHelper*  value)  {
::cordl_internals::setInstanceField<::HMUI::CurvedCanvasSettingsHelper*, 0x7a8>(this, std::forward<::HMUI::CurvedCanvasSettingsHelper*>(value));
}
constexpr ::HMUI::CurvedCanvasSettingsHelper* HMUI::CurvedTextMeshPro::__get__curvedCanvasSettingsHelper()  {
return ::cordl_internals::getInstanceField<::HMUI::CurvedCanvasSettingsHelper*, 0x7a8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedCanvasSettingsHelper*> HMUI::CurvedTextMeshPro::__get__curvedCanvasSettingsHelper() const {
return ::cordl_internals::getInstanceField<::HMUI::CurvedCanvasSettingsHelper*, 0x7a8>(this);
}
inline bool HMUI::CurvedTextMeshPro::get_useScriptableObjectColors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                            "get_useScriptableObjectColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HMUI::CurvedTextMeshPro::set_useScriptableObjectColors(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                            "set_useScriptableObjectColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color HMUI::CurvedTextMeshPro::get_color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void HMUI::CurvedTextMeshPro::set_color(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                            "set_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::CurvedTextMeshPro::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::CurvedTextMeshPro::GenerateTextMesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                            "GenerateTextMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::CurvedTextMeshPro::__Refresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                            "__Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::CurvedTextMeshPro::UpdateMesh(::UnityEngine::Mesh*  mesh, int32_t  meshIndex, ::UnityEngine::Vector2  curveUV, ::UnityEngine::Color32  color32)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                            "UpdateMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, mesh, meshIndex, curveUV, color32);
}
inline ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> HMUI::CurvedTextMeshPro::FillUV3s(int32_t  meshIndex, int32_t  vertexCount, ::UnityEngine::Vector2  curve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                            "FillUV3s",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>, false>(*this, ___internal_method, meshIndex, vertexCount, curve);
}
inline ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> HMUI::CurvedTextMeshPro::FillColors(int32_t  meshIndex, ::UnityEngine::Color32  color32)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                            "FillColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>, false>(*this, ___internal_method, meshIndex, color32);
}
inline ::HMUI::CurvedTextMeshPro* HMUI::CurvedTextMeshPro::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::CurvedTextMeshPro*>());
}
inline void HMUI::CurvedTextMeshPro::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CurvedTextMeshPro*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
