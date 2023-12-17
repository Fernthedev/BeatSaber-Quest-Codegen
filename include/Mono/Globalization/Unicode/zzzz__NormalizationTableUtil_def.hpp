#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NormalizationTableUtil)
namespace Mono::Globalization::Unicode {
class CodePointIndexer;
}
// Forward declare root types
namespace Mono::Globalization::Unicode {
class NormalizationTableUtil;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Globalization::Unicode::NormalizationTableUtil);
// Type: Mono.Globalization.Unicode::NormalizationTableUtil
namespace Mono::Globalization::Unicode {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2266))
// CS Name: ::Mono.Globalization.Unicode::NormalizationTableUtil*
class CORDL_TYPE NormalizationTableUtil : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Prop(::Mono::Globalization::Unicode::CodePointIndexer*  value) ;

static inline ::Mono::Globalization::Unicode::CodePointIndexer* getStaticF_Prop() ;

static inline void setStaticF_Map(::Mono::Globalization::Unicode::CodePointIndexer*  value) ;

static inline ::Mono::Globalization::Unicode::CodePointIndexer* getStaticF_Map() ;

static inline void setStaticF_Combining(::Mono::Globalization::Unicode::CodePointIndexer*  value) ;

static inline ::Mono::Globalization::Unicode::CodePointIndexer* getStaticF_Combining() ;

static inline void setStaticF_Composite(::Mono::Globalization::Unicode::CodePointIndexer*  value) ;

static inline ::Mono::Globalization::Unicode::CodePointIndexer* getStaticF_Composite() ;

static inline void setStaticF_Helper(::Mono::Globalization::Unicode::CodePointIndexer*  value) ;

static inline ::Mono::Globalization::Unicode::CodePointIndexer* getStaticF_Helper() ;

/// @brief Method PropIdx addr 0x2417d1c size 0x68 virtual false final false
static inline int32_t PropIdx(int32_t  cp) ;

/// @brief Method MapIdx addr 0x2417d84 size 0x68 virtual false final false
static inline int32_t MapIdx(int32_t  cp) ;

// Ctor Parameters [CppParam { name: "", ty: "NormalizationTableUtil", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NormalizationTableUtil(NormalizationTableUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NormalizationTableUtil", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NormalizationTableUtil(NormalizationTableUtil const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NormalizationTableUtil()  = default;
public:


// Fields

// Static field Prop

// Static field Map

// Static field Combining

// Static field Composite

// Static field Helper


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::NormalizationTableUtil, 0x10>, "Size mismatch!");

} // namespace end def Mono::Globalization::Unicode
NEED_NO_BOX(::Mono::Globalization::Unicode::NormalizationTableUtil);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::NormalizationTableUtil*, "Mono.Globalization.Unicode", "NormalizationTableUtil");
