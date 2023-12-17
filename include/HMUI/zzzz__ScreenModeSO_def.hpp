#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(ScreenModeSO)
namespace HMUI {
class ScreenModeData;
}
// Forward declare root types
namespace HMUI {
class ScreenModeSO;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ScreenModeSO);
// Type: HMUI::ScreenModeSO
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13592))
// CS Name: ::HMUI::ScreenModeSO*
class CORDL_TYPE ScreenModeSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::ScriptableObject)]{};

/// @brief Field _data offset 0x18
 __declspec(property(get=__get__data, put=__set__data)) ::HMUI::ScreenModeData*  _data;

 __declspec(property(get=get_data)) ::HMUI::ScreenModeData*  data;

constexpr void __set__data(::HMUI::ScreenModeData*  value) ;

constexpr ::HMUI::ScreenModeData* __get__data() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ScreenModeData*> __get__data() const;

/// @brief Method get_data addr 0x212c674 size 0x8 virtual false final false
inline ::HMUI::ScreenModeData* get_data() ;

static inline ::HMUI::ScreenModeSO* New_ctor() ;

/// @brief Method .ctor addr 0x212c67c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ScreenModeSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScreenModeSO(ScreenModeSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScreenModeSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScreenModeSO(ScreenModeSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ScreenModeSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ScreenModeSO, 0x20>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::ScreenModeSO);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ScreenModeSO*, "HMUI", "ScreenModeSO");
