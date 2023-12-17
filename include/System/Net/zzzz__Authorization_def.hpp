#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Authorization)
// Forward declare root types
namespace System::Net {
class Authorization;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Authorization);
// Type: System.Net::Authorization
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9058))
// CS Name: ::System.Net::Authorization*
class CORDL_TYPE Authorization : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_Message offset 0x10
 __declspec(property(get=__get_m_Message, put=__set_m_Message)) ::StringW  m_Message;

/// @brief Field m_Complete offset 0x18
 __declspec(property(get=__get_m_Complete, put=__set_m_Complete)) bool  m_Complete;

/// @brief Field ModuleAuthenticationType offset 0x20
 __declspec(property(get=__get_ModuleAuthenticationType, put=__set_ModuleAuthenticationType)) ::StringW  ModuleAuthenticationType;

 __declspec(property(get=get_Message)) ::StringW  Message;

 __declspec(property(get=get_Complete)) bool  Complete;

constexpr void __set_m_Message(::StringW  value) ;

constexpr ::StringW& __get_m_Message() ;

constexpr ::StringW const& __get_m_Message() const;

constexpr void __set_m_Complete(bool  value) ;

constexpr bool& __get_m_Complete() ;

constexpr bool const& __get_m_Complete() const;

constexpr void __set_ModuleAuthenticationType(::StringW  value) ;

constexpr ::StringW& __get_ModuleAuthenticationType() ;

constexpr ::StringW const& __get_ModuleAuthenticationType() const;

static inline ::System::Net::Authorization* New_ctor(::StringW  token) ;

/// @brief Method .ctor addr 0x299b458 size 0x80 virtual false final false
inline void _ctor(::StringW  token) ;

static inline ::System::Net::Authorization* New_ctor(::StringW  token, bool  finished) ;

/// @brief Method .ctor addr 0x299b4d8 size 0x80 virtual false final false
inline void _ctor(::StringW  token, bool  finished) ;

/// @brief Method get_Message addr 0x299b558 size 0x8 virtual false final false
inline ::StringW get_Message() ;

/// @brief Method get_Complete addr 0x299b560 size 0x8 virtual false final false
inline bool get_Complete() ;

// Ctor Parameters [CppParam { name: "", ty: "Authorization", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Authorization(Authorization && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Authorization", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Authorization(Authorization const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Authorization()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Authorization, 0x28>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::Authorization);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Authorization*, "System.Net", "Authorization");
