#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Background)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Background;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Background);
// Type: UnityEngine.UIElements::Background
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7293))
// CS Name: ::UnityEngine.UIElements::Background
struct CORDL_TYPE Background : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_Texture offset 0x0
 __declspec(property(get=__get_m_Texture, put=__set_m_Texture)) ::UnityEngine::Texture2D*  m_Texture;

/// @brief Field m_Sprite offset 0x8
 __declspec(property(get=__get_m_Sprite, put=__set_m_Sprite)) ::UnityEngine::Sprite*  m_Sprite;

/// @brief Field m_RenderTexture offset 0x10
 __declspec(property(get=__get_m_RenderTexture, put=__set_m_RenderTexture)) ::UnityEngine::RenderTexture*  m_RenderTexture;

/// @brief Field m_VectorImage offset 0x18
 __declspec(property(get=__get_m_VectorImage, put=__set_m_VectorImage)) ::UnityEngine::UIElements::VectorImage*  m_VectorImage;

 __declspec(property(get=get_texture, put=set_texture)) ::UnityEngine::Texture2D*  texture;

 __declspec(property(get=get_sprite, put=set_sprite)) ::UnityEngine::Sprite*  sprite;

 __declspec(property(get=get_renderTexture, put=set_renderTexture)) ::UnityEngine::RenderTexture*  renderTexture;

 __declspec(property(get=get_vectorImage, put=set_vectorImage)) ::UnityEngine::UIElements::VectorImage*  vectorImage;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Background>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::Background>*() ;

constexpr void __set_m_Texture(::UnityEngine::Texture2D*  value) ;

constexpr ::UnityEngine::Texture2D* __get_m_Texture() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> __get_m_Texture() const;

constexpr void __set_m_Sprite(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get_m_Sprite() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get_m_Sprite() const;

constexpr void __set_m_RenderTexture(::UnityEngine::RenderTexture*  value) ;

constexpr ::UnityEngine::RenderTexture* __get_m_RenderTexture() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> __get_m_RenderTexture() const;

constexpr void __set_m_VectorImage(::UnityEngine::UIElements::VectorImage*  value) ;

constexpr ::UnityEngine::UIElements::VectorImage* __get_m_VectorImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VectorImage*> __get_m_VectorImage() const;

/// @brief Method get_texture addr 0x2e6f998 size 0x8 virtual false final false
inline ::UnityEngine::Texture2D* get_texture() ;

/// @brief Method set_texture addr 0x2e6f9a0 size 0x7c virtual false final false
inline void set_texture(::UnityEngine::Texture2D*  value) ;

/// @brief Method get_sprite addr 0x2e6fa1c size 0x8 virtual false final false
inline ::UnityEngine::Sprite* get_sprite() ;

/// @brief Method set_sprite addr 0x2e6fa24 size 0x7c virtual false final false
inline void set_sprite(::UnityEngine::Sprite*  value) ;

/// @brief Method get_renderTexture addr 0x2e6faa0 size 0x8 virtual false final false
inline ::UnityEngine::RenderTexture* get_renderTexture() ;

/// @brief Method set_renderTexture addr 0x2e6faa8 size 0x7c virtual false final false
inline void set_renderTexture(::UnityEngine::RenderTexture*  value) ;

/// @brief Method get_vectorImage addr 0x2e6fb24 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::VectorImage* get_vectorImage() ;

/// @brief Method set_vectorImage addr 0x2e6fb2c size 0x7c virtual false final false
inline void set_vectorImage(::UnityEngine::UIElements::VectorImage*  value) ;

/// @brief Method FromTexture2D addr 0x2e6fba8 size 0x34 virtual false final false
static inline ::UnityEngine::UIElements::Background FromTexture2D(::UnityEngine::Texture2D*  t) ;

/// @brief Method FromRenderTexture addr 0x2e6fbdc size 0x34 virtual false final false
static inline ::UnityEngine::UIElements::Background FromRenderTexture(::UnityEngine::RenderTexture*  rt) ;

/// @brief Method FromSprite addr 0x2e6fc10 size 0x34 virtual false final false
static inline ::UnityEngine::UIElements::Background FromSprite(::UnityEngine::Sprite*  s) ;

/// @brief Method FromVectorImage addr 0x2e6fc44 size 0x34 virtual false final false
static inline ::UnityEngine::UIElements::Background FromVectorImage(::UnityEngine::UIElements::VectorImage*  vi) ;

/// @brief Method FromObject addr 0x2e6fc78 size 0x258 virtual false final false
static inline ::UnityEngine::UIElements::Background FromObject(::System::Object*  obj) ;

/// @brief Method op_Equality addr 0x2e6fed0 size 0x108 virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::Background  lhs, ::UnityEngine::UIElements::Background  rhs) ;

/// @brief Method op_Inequality addr 0x2e6ffd8 size 0x38 virtual false final false
static inline bool op_Inequality(::UnityEngine::UIElements::Background  lhs, ::UnityEngine::UIElements::Background  rhs) ;

/// @brief Method Equals addr 0x2e70010 size 0x34 virtual true final true
inline bool Equals(::UnityEngine::UIElements::Background  other) ;

/// @brief Method Equals addr 0x2e70044 size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2e700d4 size 0x98 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2e7016c size 0x138 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Texture", ty: "::UnityEngine::Texture2D*", modifiers: "", def_value: None }, CppParam { name: "m_Sprite", ty: "::UnityEngine::Sprite*", modifiers: "", def_value: None }, CppParam { name: "m_RenderTexture", ty: "::UnityEngine::RenderTexture*", modifiers: "", def_value: None }, CppParam { name: "m_VectorImage", ty: "::UnityEngine::UIElements::VectorImage*", modifiers: "", def_value: None }]
constexpr Background(::UnityEngine::Texture2D*  m_Texture, ::UnityEngine::Sprite*  m_Sprite, ::UnityEngine::RenderTexture*  m_RenderTexture, ::UnityEngine::UIElements::VectorImage*  m_VectorImage) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Background(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Background()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Background, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Background, "UnityEngine.UIElements", "Background");
