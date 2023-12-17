#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NotepadComponent)
namespace Notepad {
class NoteSO;
}
// Forward declare root types
namespace Notepad {
class NotepadComponent;
}
// Write type traits
MARK_REF_PTR_T(::Notepad::NotepadComponent);
// Type: Notepad::NotepadComponent
namespace Notepad {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16278))
// CS Name: ::Notepad::NotepadComponent*
class CORDL_TYPE NotepadComponent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field note offset 0x18
 __declspec(property(get=__get_note, put=__set_note)) ::Notepad::NoteSO*  note;

constexpr void __set_note(::Notepad::NoteSO*  value) ;

constexpr ::Notepad::NoteSO* __get_note() ;

constexpr ::cordl_internals::to_const_pointer<::Notepad::NoteSO*> __get_note() const;

static inline ::Notepad::NotepadComponent* New_ctor() ;

/// @brief Method .ctor addr 0xe26484 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NotepadComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NotepadComponent(NotepadComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotepadComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotepadComponent(NotepadComponent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NotepadComponent()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Notepad::NotepadComponent, 0x20>, "Size mismatch!");

} // namespace end def Notepad
NEED_NO_BOX(::Notepad::NotepadComponent);
DEFINE_IL2CPP_ARG_TYPE(::Notepad::NotepadComponent*, "Notepad", "NotepadComponent");
