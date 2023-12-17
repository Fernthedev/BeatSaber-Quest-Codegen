#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DrawParams)
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RenderTexture;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class DrawParams;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::DrawParams);
// Type: UnityEngine.UIElements.UIR::DrawParams
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7443))
// CS Name: ::UnityEngine.UIElements.UIR::DrawParams*
class CORDL_TYPE DrawParams : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field view offset 0x10
 __declspec(property(get=__get_view, put=__set_view)) ::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>*  view;

/// @brief Field scissor offset 0x18
 __declspec(property(get=__get_scissor, put=__set_scissor)) ::System::Collections::Generic::Stack_1<::UnityEngine::Rect>*  scissor;

/// @brief Field renderTexture offset 0x20
 __declspec(property(get=__get_renderTexture, put=__set_renderTexture)) ::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>*  renderTexture;

/// @brief Field defaultMaterial offset 0x28
 __declspec(property(get=__get_defaultMaterial, put=__set_defaultMaterial)) ::System::Collections::Generic::List_1<::UnityEngine::Material*>*  defaultMaterial;

static inline void setStaticF_k_UnlimitedRect(::UnityEngine::Rect  value) ;

static inline ::UnityEngine::Rect getStaticF_k_UnlimitedRect() ;

static inline void setStaticF_k_FullNormalizedRect(::UnityEngine::Rect  value) ;

static inline ::UnityEngine::Rect getStaticF_k_FullNormalizedRect() ;

constexpr void __set_view(::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>* __get_view() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>*> __get_view() const;

constexpr void __set_scissor(::System::Collections::Generic::Stack_1<::UnityEngine::Rect>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Rect>* __get_scissor() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::Rect>*> __get_scissor() const;

constexpr void __set_renderTexture(::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>* __get_renderTexture() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>*> __get_renderTexture() const;

constexpr void __set_defaultMaterial(::System::Collections::Generic::List_1<::UnityEngine::Material*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Material*>* __get_defaultMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Material*>*> __get_defaultMaterial() const;

/// @brief Method Reset addr 0x2dd3870 size 0x1cc virtual false final false
inline void Reset() ;

static inline ::UnityEngine::UIElements::UIR::DrawParams* New_ctor() ;

/// @brief Method .ctor addr 0x2dce574 size 0x158 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DrawParams", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawParams(DrawParams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawParams", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawParams(DrawParams const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DrawParams()  = default;
public:


// Fields

// Static field k_UnlimitedRect

// Static field k_FullNormalizedRect


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::DrawParams, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::DrawParams);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::DrawParams*, "UnityEngine.UIElements.UIR", "DrawParams");
