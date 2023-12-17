#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScoreFormatter)
namespace System::Globalization {
class NumberFormatInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class ScoreFormatter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScoreFormatter);
// Type: ::ScoreFormatter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4201))
// CS Name: ::ScoreFormatter*
class CORDL_TYPE ScoreFormatter : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF__numberFormatInfo(::System::Globalization::NumberFormatInfo*  value) ;

static inline ::System::Globalization::NumberFormatInfo* getStaticF__numberFormatInfo() ;

/// @brief Method Format addr 0x2327378 size 0x80 virtual false final false
static inline ::StringW Format(int32_t  score) ;

static inline ::GlobalNamespace::ScoreFormatter* New_ctor() ;

/// @brief Method .ctor addr 0x23273f8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ScoreFormatter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScoreFormatter(ScoreFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScoreFormatter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScoreFormatter(ScoreFormatter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ScoreFormatter()  = default;
public:


// Fields

// Static field _numberFormatInfo


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreFormatter, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScoreFormatter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreFormatter*, "", "ScoreFormatter");
