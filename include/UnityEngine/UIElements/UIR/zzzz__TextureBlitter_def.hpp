#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureBlitter)
namespace System {
class IDisposable;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine {
class Material;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class RenderTexture;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine::UIElements::UIR {
struct __TextureBlitter__BlitInfo;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class TextureBlitter;
}
namespace UnityEngine::UIElements::UIR {
struct __TextureBlitter__BlitInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::TextureBlitter);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo);
// Type: ::BlitInfo
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7386))
// CS Name: ::TextureBlitter::BlitInfo
struct CORDL_TYPE __TextureBlitter__BlitInfo : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field src offset 0x0
 __declspec(property(get=__get_src, put=__set_src)) ::UnityEngine::Texture*  src;

/// @brief Field srcRect offset 0x8
 __declspec(property(get=__get_srcRect, put=__set_srcRect)) ::UnityEngine::RectInt  srcRect;

/// @brief Field dstPos offset 0x18
 __declspec(property(get=__get_dstPos, put=__set_dstPos)) ::UnityEngine::Vector2Int  dstPos;

/// @brief Field border offset 0x20
 __declspec(property(get=__get_border, put=__set_border)) int32_t  border;

/// @brief Field tint offset 0x24
 __declspec(property(get=__get_tint, put=__set_tint)) ::UnityEngine::Color  tint;

constexpr void __set_src(::UnityEngine::Texture*  value) ;

constexpr ::UnityEngine::Texture* __get_src() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture*> __get_src() const;

constexpr void __set_srcRect(::UnityEngine::RectInt  value) ;

constexpr ::UnityEngine::RectInt& __get_srcRect() ;

constexpr ::UnityEngine::RectInt const& __get_srcRect() const;

constexpr void __set_dstPos(::UnityEngine::Vector2Int  value) ;

constexpr ::UnityEngine::Vector2Int& __get_dstPos() ;

constexpr ::UnityEngine::Vector2Int const& __get_dstPos() const;

constexpr void __set_border(int32_t  value) ;

constexpr int32_t& __get_border() ;

constexpr int32_t const& __get_border() const;

constexpr void __set_tint(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_tint() ;

constexpr ::UnityEngine::Color const& __get_tint() const;

// Ctor Parameters [CppParam { name: "src", ty: "::UnityEngine::Texture*", modifiers: "", def_value: None }, CppParam { name: "srcRect", ty: "::UnityEngine::RectInt", modifiers: "", def_value: None }, CppParam { name: "dstPos", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "border", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tint", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr __TextureBlitter__BlitInfo(::UnityEngine::Texture*  src, ::UnityEngine::RectInt  srcRect, ::UnityEngine::Vector2Int  dstPos, int32_t  border, ::UnityEngine::Color  tint) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TextureBlitter__BlitInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TextureBlitter__BlitInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::TextureBlitter
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7387))
// CS Name: ::UnityEngine.UIElements.UIR::TextureBlitter*
class CORDL_TYPE TextureBlitter : public ::System::Object {
public:
// Declarations
using BlitInfo = ::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field m_SingleBlit offset 0x10
 __declspec(property(get=__get_m_SingleBlit, put=__set_m_SingleBlit)) ::ArrayW<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo,::Array<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*>  m_SingleBlit;

/// @brief Field m_BlitMaterial offset 0x18
 __declspec(property(get=__get_m_BlitMaterial, put=__set_m_BlitMaterial)) ::UnityEngine::Material*  m_BlitMaterial;

/// @brief Field m_Properties offset 0x20
 __declspec(property(get=__get_m_Properties, put=__set_m_Properties)) ::UnityEngine::MaterialPropertyBlock*  m_Properties;

/// @brief Field m_Viewport offset 0x28
 __declspec(property(get=__get_m_Viewport, put=__set_m_Viewport)) ::UnityEngine::RectInt  m_Viewport;

/// @brief Field m_PrevRT offset 0x38
 __declspec(property(get=__get_m_PrevRT, put=__set_m_PrevRT)) ::UnityEngine::RenderTexture*  m_PrevRT;

/// @brief Field m_PendingBlits offset 0x40
 __declspec(property(get=__get_m_PendingBlits, put=__set_m_PendingBlits)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*  m_PendingBlits;

/// @brief Field <disposed>k__BackingField offset 0x48
 __declspec(property(get=__get__disposed_k__BackingField, put=__set__disposed_k__BackingField)) bool  _disposed_k__BackingField;

 __declspec(property(get=get_disposed, put=set_disposed)) bool  disposed;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

static inline void setStaticF_k_TextureIds(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_k_TextureIds() ;

static inline void setStaticF_s_CommitSampler(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_CommitSampler() ;

constexpr void __set_m_SingleBlit(::ArrayW<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo,::Array<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo,::Array<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*>& __get_m_SingleBlit() ;

constexpr ::ArrayW<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo,::Array<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*> const& __get_m_SingleBlit() const;

constexpr void __set_m_BlitMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_m_BlitMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_m_BlitMaterial() const;

constexpr void __set_m_Properties(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr ::UnityEngine::MaterialPropertyBlock* __get_m_Properties() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> __get_m_Properties() const;

constexpr void __set_m_Viewport(::UnityEngine::RectInt  value) ;

constexpr ::UnityEngine::RectInt& __get_m_Viewport() ;

constexpr ::UnityEngine::RectInt const& __get_m_Viewport() const;

constexpr void __set_m_PrevRT(::UnityEngine::RenderTexture*  value) ;

constexpr ::UnityEngine::RenderTexture* __get_m_PrevRT() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> __get_m_PrevRT() const;

constexpr void __set_m_PendingBlits(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>* __get_m_PendingBlits() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*> __get_m_PendingBlits() const;

constexpr void __set__disposed_k__BackingField(bool  value) ;

constexpr bool& __get__disposed_k__BackingField() ;

constexpr bool const& __get__disposed_k__BackingField() const;

/// @brief Method get_disposed addr 0x2e8b8e0 size 0x8 virtual false final false
inline bool get_disposed() ;

/// @brief Method set_disposed addr 0x2e8b8e8 size 0xc virtual false final false
inline void set_disposed(bool  value) ;

/// @brief Method Dispose addr 0x2e7d444 size 0x6c virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x2e8b8f4 size 0x7c virtual true final false
inline void Dispose(bool  disposing) ;

static inline ::UnityEngine::UIElements::UIR::TextureBlitter* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x2e7d13c size 0xb4 virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method QueueBlit addr 0x2e7d830 size 0x1a4 virtual false final false
inline void QueueBlit(::UnityEngine::Texture*  src, ::UnityEngine::RectInt  srcRect, ::UnityEngine::Vector2Int  dstPos, bool  addBorder, ::UnityEngine::Color  tint) ;

/// @brief Method BlitOneNow addr 0x2e7e0b4 size 0xe4 virtual false final false
inline void BlitOneNow(::UnityEngine::RenderTexture*  dst, ::UnityEngine::Texture*  src, ::UnityEngine::RectInt  srcRect, ::UnityEngine::Vector2Int  dstPos, bool  addBorder, ::UnityEngine::Color  tint) ;

/// @brief Method Commit addr 0x2e7de90 size 0xec virtual false final false
inline void Commit(::UnityEngine::RenderTexture*  dst) ;

/// @brief Method BeginBlit addr 0x2e8ba9c size 0x1fc virtual false final false
inline void BeginBlit(::UnityEngine::RenderTexture*  dst) ;

/// @brief Method DoBlit addr 0x2e8bc98 size 0x51c virtual false final false
inline void DoBlit(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*  blitInfos, int32_t  startIndex) ;

/// @brief Method EndBlit addr 0x2e8c1b4 size 0xe0 virtual false final false
inline void EndBlit() ;

// Ctor Parameters [CppParam { name: "", ty: "TextureBlitter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureBlitter(TextureBlitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureBlitter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureBlitter(TextureBlitter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextureBlitter()  = default;
public:


// Fields

// Static field k_TextureIds

// Static field s_CommitSampler


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::TextureBlitter, 0x50>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::TextureBlitter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::TextureBlitter*, "UnityEngine.UIElements.UIR", "TextureBlitter");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo, "UnityEngine.UIElements.UIR", "TextureBlitter/BlitInfo");
