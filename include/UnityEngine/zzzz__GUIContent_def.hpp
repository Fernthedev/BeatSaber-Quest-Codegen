#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GUIContent)
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine {
class GUIContent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUIContent);
// Type: UnityEngine::GUIContent
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14611))
// CS Name: ::UnityEngine::GUIContent*
class CORDL_TYPE GUIContent : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_Text offset 0x10
 __declspec(property(get=__get_m_Text, put=__set_m_Text)) ::StringW  m_Text;

/// @brief Field m_Image offset 0x18
 __declspec(property(get=__get_m_Image, put=__set_m_Image)) ::UnityEngine::Texture*  m_Image;

/// @brief Field m_Tooltip offset 0x20
 __declspec(property(get=__get_m_Tooltip, put=__set_m_Tooltip)) ::StringW  m_Tooltip;

 __declspec(property(get=get_text, put=set_text)) ::StringW  text;

 __declspec(property(put=set_image)) ::UnityEngine::Texture*  image;

 __declspec(property(get=get_tooltip, put=set_tooltip)) ::StringW  tooltip;

constexpr void __set_m_Text(::StringW  value) ;

constexpr ::StringW& __get_m_Text() ;

constexpr ::StringW const& __get_m_Text() const;

constexpr void __set_m_Image(::UnityEngine::Texture*  value) ;

constexpr ::UnityEngine::Texture* __get_m_Image() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture*> __get_m_Image() const;

constexpr void __set_m_Tooltip(::StringW  value) ;

constexpr ::StringW& __get_m_Tooltip() ;

constexpr ::StringW const& __get_m_Tooltip() const;

static inline void setStaticF_s_Text(::UnityEngine::GUIContent*  value) ;

static inline ::UnityEngine::GUIContent* getStaticF_s_Text() ;

static inline void setStaticF_s_Image(::UnityEngine::GUIContent*  value) ;

static inline ::UnityEngine::GUIContent* getStaticF_s_Image() ;

static inline void setStaticF_s_TextImage(::UnityEngine::GUIContent*  value) ;

static inline ::UnityEngine::GUIContent* getStaticF_s_TextImage() ;

static inline void setStaticF_none(::UnityEngine::GUIContent*  value) ;

static inline ::UnityEngine::GUIContent* getStaticF_none() ;

/// @brief Method get_text addr 0x2d04790 size 0x8 virtual false final false
inline ::StringW get_text() ;

/// @brief Method set_text addr 0x2d04798 size 0x8 virtual false final false
inline void set_text(::StringW  value) ;

/// @brief Method set_image addr 0x2d047a0 size 0x8 virtual false final false
inline void set_image(::UnityEngine::Texture*  value) ;

/// @brief Method get_tooltip addr 0x2cfd194 size 0x8 virtual false final false
inline ::StringW get_tooltip() ;

/// @brief Method set_tooltip addr 0x2d047a8 size 0x8 virtual false final false
inline void set_tooltip(::StringW  value) ;

static inline ::UnityEngine::GUIContent* New_ctor() ;

/// @brief Method .ctor addr 0x2d047b0 size 0x5c virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::GUIContent* New_ctor(::StringW  text) ;

/// @brief Method .ctor addr 0x2d0480c size 0x64 virtual false final false
inline void _ctor(::StringW  text) ;

static inline ::UnityEngine::GUIContent* New_ctor(::StringW  text, ::UnityEngine::Texture*  image, ::StringW  tooltip) ;

/// @brief Method .ctor addr 0x2d04870 size 0x84 virtual false final false
inline void _ctor(::StringW  text, ::UnityEngine::Texture*  image, ::StringW  tooltip) ;

static inline ::UnityEngine::GUIContent* New_ctor(::UnityEngine::GUIContent*  src) ;

/// @brief Method .ctor addr 0x2cfc0e8 size 0x84 virtual false final false
inline void _ctor(::UnityEngine::GUIContent*  src) ;

/// @brief Method Temp addr 0x2cfcaa8 size 0x8c virtual false final false
static inline ::UnityEngine::GUIContent* Temp(::StringW  t) ;

/// @brief Method ClearStaticCache addr 0x2d04260 size 0xa0 virtual false final false
static inline void ClearStaticCache() ;

/// @brief Method ToString addr 0x2d048f4 size 0x20 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "GUIContent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GUIContent(GUIContent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUIContent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUIContent(GUIContent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GUIContent()  = default;
public:


// Fields

// Static field s_Text

// Static field s_Image

// Static field s_TextImage

// Static field none


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUIContent, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::GUIContent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUIContent*, "UnityEngine", "GUIContent");
