#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ScrollToTopOnEnable)
namespace HMUI {
class ScrollView;
}
// Forward declare root types
namespace HMUI {
class ScrollToTopOnEnable;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ScrollToTopOnEnable);
// Type: HMUI::ScrollToTopOnEnable
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13639))
// CS Name: ::HMUI::ScrollToTopOnEnable*
class CORDL_TYPE ScrollToTopOnEnable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _scrollView offset 0x18
 __declspec(property(get=__get__scrollView, put=__set__scrollView)) ::HMUI::ScrollView*  _scrollView;

constexpr void __set__scrollView(::HMUI::ScrollView*  value) ;

constexpr ::HMUI::ScrollView* __get__scrollView() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ScrollView*> __get__scrollView() const;

/// @brief Method OnEnable addr 0x2142df0 size 0x20 virtual false final false
inline void OnEnable() ;

static inline ::HMUI::ScrollToTopOnEnable* New_ctor() ;

/// @brief Method .ctor addr 0x2142ed4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ScrollToTopOnEnable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScrollToTopOnEnable(ScrollToTopOnEnable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScrollToTopOnEnable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScrollToTopOnEnable(ScrollToTopOnEnable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ScrollToTopOnEnable()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ScrollToTopOnEnable, 0x20>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::ScrollToTopOnEnable);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ScrollToTopOnEnable*, "HMUI", "ScrollToTopOnEnable");
