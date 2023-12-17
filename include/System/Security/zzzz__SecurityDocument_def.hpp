#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecurityDocument)
namespace System::Security {
class SecurityElement;
}
// Forward declare root types
namespace System::Security {
class SecurityDocument;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::SecurityDocument);
// Type: System.Security::SecurityDocument
namespace System::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2881))
// CS Name: ::System.Security::SecurityDocument*
class CORDL_TYPE SecurityDocument : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_data offset 0x10
 __declspec(property(get=__get_m_data, put=__set_m_data)) ::ArrayW<uint8_t,::Array<uint8_t>*>  m_data;

constexpr void __set_m_data(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_m_data() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_m_data() const;

static inline ::System::Security::SecurityDocument* New_ctor(int32_t  numData) ;

/// @brief Method .ctor addr 0x2450378 size 0x68 virtual false final false
inline void _ctor(int32_t  numData) ;

/// @brief Method GuaranteeSize addr 0x24503e0 size 0xa4 virtual false final false
inline void GuaranteeSize(int32_t  size) ;

/// @brief Method AddString addr 0x2450484 size 0x14c virtual false final false
inline void AddString(::StringW  str, ByRef<int32_t>  position) ;

/// @brief Method AppendString addr 0x24505d0 size 0x98 virtual false final false
inline void AppendString(::StringW  str, ByRef<int32_t>  position) ;

/// @brief Method EncodedStringSize addr 0x2450668 size 0x20 virtual false final false
static inline int32_t EncodedStringSize(::StringW  str) ;

/// @brief Method GetString addr 0x2450688 size 0x310 virtual false final false
inline ::StringW GetString(ByRef<int32_t>  position, bool  bCreate) ;

/// @brief Method AddToken addr 0x2450c04 size 0x5c virtual false final false
inline void AddToken(uint8_t  b, ByRef<int32_t>  position) ;

/// @brief Method GetRootElement addr 0x2450c60 size 0x1c virtual false final false
inline ::System::Security::SecurityElement* GetRootElement() ;

/// @brief Method GetElement addr 0x2450c7c size 0x1c virtual false final false
inline ::System::Security::SecurityElement* GetElement(int32_t  position, bool  bCreate) ;

/// @brief Method InternalGetElement addr 0x2450c98 size 0x208 virtual false final false
inline ::System::Security::SecurityElement* InternalGetElement(ByRef<int32_t>  position, bool  bCreate) ;

// Ctor Parameters [CppParam { name: "", ty: "SecurityDocument", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SecurityDocument(SecurityDocument && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecurityDocument", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecurityDocument(SecurityDocument const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SecurityDocument()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::SecurityDocument, 0x18>, "Size mismatch!");

} // namespace end def System::Security
NEED_NO_BOX(::System::Security::SecurityDocument);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::SecurityDocument*, "System.Security", "SecurityDocument");
