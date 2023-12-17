#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncProtocolResult)
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
// Forward declare root types
namespace Mono::Net::Security {
class AsyncProtocolResult;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::AsyncProtocolResult);
// Type: Mono.Net.Security::AsyncProtocolResult
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8818))
// CS Name: ::Mono.Net.Security::AsyncProtocolResult*
class CORDL_TYPE AsyncProtocolResult : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <UserResult>k__BackingField offset 0x10
 __declspec(property(get=__get__UserResult_k__BackingField, put=__set__UserResult_k__BackingField)) int32_t  _UserResult_k__BackingField;

/// @brief Field <Error>k__BackingField offset 0x18
 __declspec(property(get=__get__Error_k__BackingField, put=__set__Error_k__BackingField)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  _Error_k__BackingField;

 __declspec(property(get=get_UserResult)) int32_t  UserResult;

 __declspec(property(get=get_Error)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  Error;

constexpr void __set__UserResult_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__UserResult_k__BackingField() ;

constexpr int32_t const& __get__UserResult_k__BackingField() const;

constexpr void __set__Error_k__BackingField(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* __get__Error_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> __get__Error_k__BackingField() const;

/// @brief Method get_UserResult addr 0x281e160 size 0x8 virtual false final false
inline int32_t get_UserResult() ;

/// @brief Method get_Error addr 0x281e168 size 0x8 virtual false final false
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* get_Error() ;

static inline ::Mono::Net::Security::AsyncProtocolResult* New_ctor(int32_t  result) ;

/// @brief Method .ctor addr 0x281e170 size 0x28 virtual false final false
inline void _ctor(int32_t  result) ;

static inline ::Mono::Net::Security::AsyncProtocolResult* New_ctor(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  error) ;

/// @brief Method .ctor addr 0x281e198 size 0x28 virtual false final false
inline void _ctor(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  error) ;

// Ctor Parameters [CppParam { name: "", ty: "AsyncProtocolResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncProtocolResult(AsyncProtocolResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncProtocolResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncProtocolResult(AsyncProtocolResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AsyncProtocolResult()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::AsyncProtocolResult, 0x20>, "Size mismatch!");

} // namespace end def Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::AsyncProtocolResult);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::AsyncProtocolResult*, "Mono.Net.Security", "AsyncProtocolResult");
