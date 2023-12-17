#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextureBlitter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextureBlitter_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
constexpr void UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo::__set_src(::UnityEngine::Texture*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Texture*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Texture*>(value));
}
constexpr ::UnityEngine::Texture* UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo::__get_src()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture*> UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo::__get_src() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo::__set_srcRect(::UnityEngine::RectInt  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectInt, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::RectInt>(value));
}
constexpr ::UnityEngine::RectInt& UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo::__get_srcRect()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectInt, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::RectInt const& UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo::__get_srcRect() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectInt, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo::__set_dstPos(::UnityEngine::Vector2Int  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2Int, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector2Int>(value));
}
constexpr ::UnityEngine::Vector2Int& UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo::__get_dstPos()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2Int, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo::__get_dstPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2Int, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo::__set_border(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo::__get_border()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo::__get_border() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo::__set_tint(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo::__get_tint()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Color const& UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo::__get_tint() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "src", ty: "::UnityEngine::Texture*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "srcRect", ty: "::UnityEngine::RectInt", modifiers: "", def_value: Some("{}") }, CppParam { name: "dstPos", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "border", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "tint", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo::__TextureBlitter__BlitInfo(::UnityEngine::Texture*  src, ::UnityEngine::RectInt  srcRect, ::UnityEngine::Vector2Int  dstPos, int32_t  border, ::UnityEngine::Color  tint) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->src = src;
this->srcRect = srcRect;
this->dstPos = dstPos;
this->border = border;
this->tint = tint;
}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextureBlitter.get_disposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::TextureBlitter::*)()>(&::UnityEngine::UIElements::UIR::TextureBlitter::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8b8e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                            "get_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextureBlitter.set_disposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::TextureBlitter::*)(bool)>(&::UnityEngine::UIElements::UIR::TextureBlitter::set_disposed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e8b8e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                            "set_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextureBlitter.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::TextureBlitter::*)()>(&::UnityEngine::UIElements::UIR::TextureBlitter::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2e7d444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextureBlitter.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::TextureBlitter::*)(bool)>(&::UnityEngine::UIElements::UIR::TextureBlitter::Dispose)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e8b8f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextureBlitter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::TextureBlitter::*)(int32_t)>(&::UnityEngine::UIElements::UIR::TextureBlitter::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2e7d13c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextureBlitter.QueueBlit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::TextureBlitter::*)(::UnityEngine::Texture*, ::UnityEngine::RectInt, ::UnityEngine::Vector2Int, bool, ::UnityEngine::Color)>(&::UnityEngine::UIElements::UIR::TextureBlitter::QueueBlit)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2e7d830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                            "QueueBlit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextureBlitter.BlitOneNow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::TextureBlitter::*)(::UnityEngine::RenderTexture*, ::UnityEngine::Texture*, ::UnityEngine::RectInt, ::UnityEngine::Vector2Int, bool, ::UnityEngine::Color)>(&::UnityEngine::UIElements::UIR::TextureBlitter::BlitOneNow)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2e7e0b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                            "BlitOneNow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextureBlitter.Commit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::TextureBlitter::*)(::UnityEngine::RenderTexture*)>(&::UnityEngine::UIElements::UIR::TextureBlitter::Commit)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2e7de90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                            "Commit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextureBlitter.BeginBlit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::TextureBlitter::*)(::UnityEngine::RenderTexture*)>(&::UnityEngine::UIElements::UIR::TextureBlitter::BeginBlit)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2e8ba9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                            "BeginBlit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextureBlitter.DoBlit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::TextureBlitter::*)(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*, int32_t)>(&::UnityEngine::UIElements::UIR::TextureBlitter::DoBlit)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x2e8bc98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                            "DoBlit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextureBlitter.EndBlit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::TextureBlitter::*)()>(&::UnityEngine::UIElements::UIR::TextureBlitter::EndBlit)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2e8c1b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                            "EndBlit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::UIElements::UIR::TextureBlitter::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
inline void UnityEngine::UIElements::UIR::TextureBlitter::setStaticF_k_TextureIds(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t,::Array<int32_t>*>, "k_TextureIds", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get>(std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t,::Array<int32_t>*> UnityEngine::UIElements::UIR::TextureBlitter::getStaticF_k_TextureIds()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t,::Array<int32_t>*>, "k_TextureIds", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get>();
}
inline void UnityEngine::UIElements::UIR::TextureBlitter::setStaticF_s_CommitSampler(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_CommitSampler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::TextureBlitter::getStaticF_s_CommitSampler()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_CommitSampler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get>();
}
constexpr void UnityEngine::UIElements::UIR::TextureBlitter::__set_m_SingleBlit(::ArrayW<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo,::Array<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo,::Array<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*>, 0x10>(this, std::forward<::ArrayW<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo,::Array<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo,::Array<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*>& UnityEngine::UIElements::UIR::TextureBlitter::__get_m_SingleBlit()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo,::Array<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*>, 0x10>(this);
}
constexpr ::ArrayW<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo,::Array<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*> const& UnityEngine::UIElements::UIR::TextureBlitter::__get_m_SingleBlit() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo,::Array<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*>, 0x10>(this);
}
constexpr void UnityEngine::UIElements::UIR::TextureBlitter::__set_m_BlitMaterial(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x18>(this, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* UnityEngine::UIElements::UIR::TextureBlitter::__get_m_BlitMaterial()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> UnityEngine::UIElements::UIR::TextureBlitter::__get_m_BlitMaterial() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x18>(this);
}
constexpr void UnityEngine::UIElements::UIR::TextureBlitter::__set_m_Properties(::UnityEngine::MaterialPropertyBlock*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MaterialPropertyBlock*, 0x20>(this, std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
constexpr ::UnityEngine::MaterialPropertyBlock* UnityEngine::UIElements::UIR::TextureBlitter::__get_m_Properties()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MaterialPropertyBlock*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> UnityEngine::UIElements::UIR::TextureBlitter::__get_m_Properties() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MaterialPropertyBlock*, 0x20>(this);
}
constexpr void UnityEngine::UIElements::UIR::TextureBlitter::__set_m_Viewport(::UnityEngine::RectInt  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectInt, 0x28>(this, std::forward<::UnityEngine::RectInt>(value));
}
constexpr ::UnityEngine::RectInt& UnityEngine::UIElements::UIR::TextureBlitter::__get_m_Viewport()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectInt, 0x28>(this);
}
constexpr ::UnityEngine::RectInt const& UnityEngine::UIElements::UIR::TextureBlitter::__get_m_Viewport() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectInt, 0x28>(this);
}
constexpr void UnityEngine::UIElements::UIR::TextureBlitter::__set_m_PrevRT(::UnityEngine::RenderTexture*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RenderTexture*, 0x38>(this, std::forward<::UnityEngine::RenderTexture*>(value));
}
constexpr ::UnityEngine::RenderTexture* UnityEngine::UIElements::UIR::TextureBlitter::__get_m_PrevRT()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> UnityEngine::UIElements::UIR::TextureBlitter::__get_m_PrevRT() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture*, 0x38>(this);
}
constexpr void UnityEngine::UIElements::UIR::TextureBlitter::__set_m_PendingBlits(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*, 0x40>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>* UnityEngine::UIElements::UIR::TextureBlitter::__get_m_PendingBlits()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*> UnityEngine::UIElements::UIR::TextureBlitter::__get_m_PendingBlits() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*, 0x40>(this);
}
constexpr void UnityEngine::UIElements::UIR::TextureBlitter::__set__disposed_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::UIR::TextureBlitter::__get__disposed_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr bool const& UnityEngine::UIElements::UIR::TextureBlitter::__get__disposed_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
inline bool UnityEngine::UIElements::UIR::TextureBlitter::get_disposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                            "get_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::TextureBlitter::set_disposed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                            "set_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::TextureBlitter::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::TextureBlitter::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disposing);
}
/// @param capacity: int32_t (default: static_cast<int32_t>(0x200))
inline ::UnityEngine::UIElements::UIR::TextureBlitter* UnityEngine::UIElements::UIR::TextureBlitter::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UIR::TextureBlitter*>(capacity));
}
/// @param capacity: int32_t (default: static_cast<int32_t>(0x200))
inline void UnityEngine::UIElements::UIR::TextureBlitter::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, capacity);
}
inline void UnityEngine::UIElements::UIR::TextureBlitter::QueueBlit(::UnityEngine::Texture*  src, ::UnityEngine::RectInt  srcRect, ::UnityEngine::Vector2Int  dstPos, bool  addBorder, ::UnityEngine::Color  tint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                            "QueueBlit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, src, srcRect, dstPos, addBorder, tint);
}
inline void UnityEngine::UIElements::UIR::TextureBlitter::BlitOneNow(::UnityEngine::RenderTexture*  dst, ::UnityEngine::Texture*  src, ::UnityEngine::RectInt  srcRect, ::UnityEngine::Vector2Int  dstPos, bool  addBorder, ::UnityEngine::Color  tint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                            "BlitOneNow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dst, src, srcRect, dstPos, addBorder, tint);
}
inline void UnityEngine::UIElements::UIR::TextureBlitter::Commit(::UnityEngine::RenderTexture*  dst)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                            "Commit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dst);
}
inline void UnityEngine::UIElements::UIR::TextureBlitter::BeginBlit(::UnityEngine::RenderTexture*  dst)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                            "BeginBlit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dst);
}
inline void UnityEngine::UIElements::UIR::TextureBlitter::DoBlit(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*  blitInfos, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                            "DoBlit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, blitInfos, startIndex);
}
inline void UnityEngine::UIElements::UIR::TextureBlitter::EndBlit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TextureBlitter*>::get(),
                            "EndBlit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
