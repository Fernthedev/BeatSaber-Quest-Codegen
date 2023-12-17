#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LanguageDropdown)
namespace Polyglot {
class ILocalize;
}
namespace UnityEngine::UI {
class Dropdown;
}
// Forward declare root types
namespace Polyglot {
class LanguageDropdown;
}
// Write type traits
MARK_REF_PTR_T(::Polyglot::LanguageDropdown);
// Type: Polyglot::LanguageDropdown
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15557))
// CS Name: ::Polyglot::LanguageDropdown*
class CORDL_TYPE LanguageDropdown : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field dropdown offset 0x18
 __declspec(property(get=__get_dropdown, put=__set_dropdown)) ::UnityEngine::UI::Dropdown*  dropdown;

/// @brief Convert operator to "::Polyglot::ILocalize"
constexpr operator  ::Polyglot::ILocalize*() noexcept;

constexpr void __set_dropdown(::UnityEngine::UI::Dropdown*  value) ;

constexpr ::UnityEngine::UI::Dropdown* __get_dropdown() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Dropdown*> __get_dropdown() const;

/// @brief Method Reset addr 0x2802824 size 0x50 virtual false final false
inline void Reset() ;

/// @brief Method Start addr 0x2802874 size 0x24 virtual false final false
inline void Start() ;

/// @brief Method CreateDropdown addr 0x2802898 size 0x22c virtual false final false
inline void CreateDropdown() ;

/// @brief Method OnLocalize addr 0x2802e10 size 0x148 virtual true final true
inline void OnLocalize() ;

static inline ::Polyglot::LanguageDropdown* New_ctor() ;

/// @brief Method .ctor addr 0x2802f58 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LanguageDropdown", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LanguageDropdown(LanguageDropdown && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LanguageDropdown", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LanguageDropdown(LanguageDropdown const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LanguageDropdown()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::LanguageDropdown, 0x20>, "Size mismatch!");

} // namespace end def Polyglot
NEED_NO_BOX(::Polyglot::LanguageDropdown);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::LanguageDropdown*, "Polyglot", "LanguageDropdown");
