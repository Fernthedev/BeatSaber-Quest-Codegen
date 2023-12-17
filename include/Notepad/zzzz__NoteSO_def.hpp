#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NoteSO)
namespace Notepad {
struct NoteURL;
}
// Forward declare root types
namespace Notepad {
class NoteSO;
}
// Write type traits
MARK_REF_PTR_T(::Notepad::NoteSO);
// Type: Notepad::NoteSO
namespace Notepad {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16280))
// CS Name: ::Notepad::NoteSO*
class CORDL_TYPE NoteSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::ScriptableObject)]{};

/// @brief Field title offset 0x18
 __declspec(property(get=__get_title, put=__set_title)) ::StringW  title;

/// @brief Field content offset 0x20
 __declspec(property(get=__get_content, put=__set_content)) ::StringW  content;

/// @brief Field urls offset 0x28
 __declspec(property(get=__get_urls, put=__set_urls)) ::ArrayW<::Notepad::NoteURL,::Array<::Notepad::NoteURL>*>  urls;

constexpr void __set_title(::StringW  value) ;

constexpr ::StringW& __get_title() ;

constexpr ::StringW const& __get_title() const;

constexpr void __set_content(::StringW  value) ;

constexpr ::StringW& __get_content() ;

constexpr ::StringW const& __get_content() const;

constexpr void __set_urls(::ArrayW<::Notepad::NoteURL,::Array<::Notepad::NoteURL>*>  value) ;

constexpr ::ArrayW<::Notepad::NoteURL,::Array<::Notepad::NoteURL>*>& __get_urls() ;

constexpr ::ArrayW<::Notepad::NoteURL,::Array<::Notepad::NoteURL>*> const& __get_urls() const;

static inline ::Notepad::NoteSO* New_ctor() ;

/// @brief Method .ctor addr 0xe2648c size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NoteSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteSO(NoteSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteSO(NoteSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NoteSO()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Notepad::NoteSO, 0x30>, "Size mismatch!");

} // namespace end def Notepad
NEED_NO_BOX(::Notepad::NoteSO);
DEFINE_IL2CPP_ARG_TYPE(::Notepad::NoteSO*, "Notepad", "NoteSO");
