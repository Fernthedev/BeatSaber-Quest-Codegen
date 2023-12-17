#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Contraction)
// Forward declare root types
namespace Mono::Globalization::Unicode {
class Contraction;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Globalization::Unicode::Contraction);
// Type: Mono.Globalization.Unicode::Contraction
namespace Mono::Globalization::Unicode {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2260))
// CS Name: ::Mono.Globalization.Unicode::Contraction*
class CORDL_TYPE Contraction : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field Index offset 0x10
 __declspec(property(get=__get_Index, put=__set_Index)) int32_t  Index;

/// @brief Field Source offset 0x18
 __declspec(property(get=__get_Source, put=__set_Source)) ::ArrayW<char16_t,::Array<char16_t>*>  Source;

/// @brief Field Replacement offset 0x20
 __declspec(property(get=__get_Replacement, put=__set_Replacement)) ::StringW  Replacement;

/// @brief Field SortKey offset 0x28
 __declspec(property(get=__get_SortKey, put=__set_SortKey)) ::ArrayW<uint8_t,::Array<uint8_t>*>  SortKey;

constexpr void __set_Index(int32_t  value) ;

constexpr int32_t& __get_Index() ;

constexpr int32_t const& __get_Index() const;

constexpr void __set_Source(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __get_Source() ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __get_Source() const;

constexpr void __set_Replacement(::StringW  value) ;

constexpr ::StringW& __get_Replacement() ;

constexpr ::StringW const& __get_Replacement() const;

constexpr void __set_SortKey(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_SortKey() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_SortKey() const;

static inline ::Mono::Globalization::Unicode::Contraction* New_ctor(int32_t  index, ::ArrayW<char16_t,::Array<char16_t>*>  source, ::StringW  replacement, ::ArrayW<uint8_t,::Array<uint8_t>*>  sortkey) ;

/// @brief Method .ctor addr 0x2415580 size 0x44 virtual false final false
inline void _ctor(int32_t  index, ::ArrayW<char16_t,::Array<char16_t>*>  source, ::StringW  replacement, ::ArrayW<uint8_t,::Array<uint8_t>*>  sortkey) ;

// Ctor Parameters [CppParam { name: "", ty: "Contraction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Contraction(Contraction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Contraction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Contraction(Contraction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Contraction()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::Contraction, 0x30>, "Size mismatch!");

} // namespace end def Mono::Globalization::Unicode
NEED_NO_BOX(::Mono::Globalization::Unicode::Contraction);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::Contraction*, "Mono.Globalization.Unicode", "Contraction");
