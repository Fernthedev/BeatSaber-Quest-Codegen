#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__TextElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteCharacter)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class SpriteCharacter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::SpriteCharacter);
// Type: UnityEngine.TextCore.Text::SpriteCharacter
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13706))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13725))
// CS Name: ::UnityEngine.TextCore.Text::SpriteCharacter*
class CORDL_TYPE SpriteCharacter : public ::UnityEngine::TextCore::Text::TextElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::TextCore::Text::TextElement)]{};

/// @brief Field m_Name offset 0x30
 __declspec(property(get=__get_m_Name, put=__set_m_Name)) ::StringW  m_Name;

/// @brief Field m_HashCode offset 0x38
 __declspec(property(get=__get_m_HashCode, put=__set_m_HashCode)) int32_t  m_HashCode;

 __declspec(property(get=get_name)) ::StringW  name;

constexpr void __set_m_Name(::StringW  value) ;

constexpr ::StringW& __get_m_Name() ;

constexpr ::StringW const& __get_m_Name() const;

constexpr void __set_m_HashCode(int32_t  value) ;

constexpr int32_t& __get_m_HashCode() ;

constexpr int32_t const& __get_m_HashCode() const;

/// @brief Method get_name addr 0x2d4a7f8 size 0x8 virtual false final false
inline ::StringW get_name() ;

static inline ::UnityEngine::TextCore::Text::SpriteCharacter* New_ctor() ;

/// @brief Method .ctor addr 0x2d4a800 size 0x20 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SpriteCharacter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpriteCharacter(SpriteCharacter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpriteCharacter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpriteCharacter(SpriteCharacter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SpriteCharacter()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::SpriteCharacter, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::SpriteCharacter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::SpriteCharacter*, "UnityEngine.TextCore.Text", "SpriteCharacter");
