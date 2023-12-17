#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TernaryTreeReadOnly)
// Forward declare root types
namespace System::Xml {
class TernaryTreeReadOnly;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::TernaryTreeReadOnly);
// Type: System.Xml::TernaryTreeReadOnly
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11439))
// CS Name: ::System.Xml::TernaryTreeReadOnly*
class CORDL_TYPE TernaryTreeReadOnly : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field nodeBuffer offset 0x10
 __declspec(property(get=__get_nodeBuffer, put=__set_nodeBuffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  nodeBuffer;

constexpr void __set_nodeBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_nodeBuffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_nodeBuffer() const;

static inline ::System::Xml::TernaryTreeReadOnly* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  nodeBuffer) ;

/// @brief Method .ctor addr 0x2851124 size 0x28 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  nodeBuffer) ;

/// @brief Method FindCaseInsensitiveString addr 0x284f980 size 0x12c virtual false final false
inline uint8_t FindCaseInsensitiveString(::StringW  stringToFind) ;

// Ctor Parameters [CppParam { name: "", ty: "TernaryTreeReadOnly", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TernaryTreeReadOnly(TernaryTreeReadOnly && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TernaryTreeReadOnly", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TernaryTreeReadOnly(TernaryTreeReadOnly const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TernaryTreeReadOnly()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::TernaryTreeReadOnly, 0x18>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::TernaryTreeReadOnly);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::TernaryTreeReadOnly*, "System.Xml", "TernaryTreeReadOnly");
