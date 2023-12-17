#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_FontUtilities)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_Character;
}
namespace TMPro {
class TMP_FontAsset;
}
// Forward declare root types
namespace TMPro {
class TMP_FontUtilities;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_FontUtilities);
// Type: TMPro::TMP_FontUtilities
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12369))
// CS Name: ::TMPro::TMP_FontUtilities*
class CORDL_TYPE TMP_FontUtilities : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_k_searchedFontAssets(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_k_searchedFontAssets() ;

/// @brief Method SearchForCharacter addr 0x2c10f64 size 0xe4 virtual false final false
static inline ::TMPro::TMP_FontAsset* SearchForCharacter(::TMPro::TMP_FontAsset*  font, uint32_t  unicode, ByRef<::TMPro::TMP_Character*>  character) ;

/// @brief Method SearchForCharacter addr 0x2c112d8 size 0x4 virtual false final false
static inline ::TMPro::TMP_FontAsset* SearchForCharacter(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*  fonts, uint32_t  unicode, ByRef<::TMPro::TMP_Character*>  character) ;

/// @brief Method SearchForCharacterInternal addr 0x2c11048 size 0x290 virtual false final false
static inline ::TMPro::TMP_FontAsset* SearchForCharacterInternal(::TMPro::TMP_FontAsset*  font, uint32_t  unicode, ByRef<::TMPro::TMP_Character*>  character) ;

/// @brief Method SearchForCharacterInternal addr 0x2c112dc size 0xf0 virtual false final false
static inline ::TMPro::TMP_FontAsset* SearchForCharacterInternal(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset*>*  fonts, uint32_t  unicode, ByRef<::TMPro::TMP_Character*>  character) ;

// Ctor Parameters [CppParam { name: "", ty: "TMP_FontUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TMP_FontUtilities(TMP_FontUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMP_FontUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMP_FontUtilities(TMP_FontUtilities const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TMP_FontUtilities()  = default;
public:


// Fields

// Static field k_searchedFontAssets


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_FontUtilities, 0x10>, "Size mismatch!");

} // namespace end def TMPro
NEED_NO_BOX(::TMPro::TMP_FontUtilities);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_FontUtilities*, "TMPro", "TMP_FontUtilities");
