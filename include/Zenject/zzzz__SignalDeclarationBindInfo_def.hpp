#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignalDeclarationBindInfo)
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace Zenject {
struct SignalMissingHandlerResponses;
}
// Forward declare root types
namespace Zenject {
class SignalDeclarationBindInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalDeclarationBindInfo);
// Type: Zenject::SignalDeclarationBindInfo
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10654))
// CS Name: ::Zenject::SignalDeclarationBindInfo*
class CORDL_TYPE SignalDeclarationBindInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field <Identifier>k__BackingField offset 0x10
 __declspec(property(get=__get__Identifier_k__BackingField, put=__set__Identifier_k__BackingField)) ::System::Object*  _Identifier_k__BackingField;

/// @brief Field <SignalType>k__BackingField offset 0x18
 __declspec(property(get=__get__SignalType_k__BackingField, put=__set__SignalType_k__BackingField)) ::System::Type*  _SignalType_k__BackingField;

/// @brief Field <RunAsync>k__BackingField offset 0x20
 __declspec(property(get=__get__RunAsync_k__BackingField, put=__set__RunAsync_k__BackingField)) bool  _RunAsync_k__BackingField;

/// @brief Field <TickPriority>k__BackingField offset 0x24
 __declspec(property(get=__get__TickPriority_k__BackingField, put=__set__TickPriority_k__BackingField)) int32_t  _TickPriority_k__BackingField;

/// @brief Field <MissingHandlerResponse>k__BackingField offset 0x28
 __declspec(property(get=__get__MissingHandlerResponse_k__BackingField, put=__set__MissingHandlerResponse_k__BackingField)) ::Zenject::SignalMissingHandlerResponses  _MissingHandlerResponse_k__BackingField;

 __declspec(property(get=get_Identifier, put=set_Identifier)) ::System::Object*  Identifier;

 __declspec(property(get=get_SignalType, put=set_SignalType)) ::System::Type*  SignalType;

 __declspec(property(get=get_RunAsync, put=set_RunAsync)) bool  RunAsync;

 __declspec(property(get=get_TickPriority, put=set_TickPriority)) int32_t  TickPriority;

 __declspec(property(get=get_MissingHandlerResponse, put=set_MissingHandlerResponse)) ::Zenject::SignalMissingHandlerResponses  MissingHandlerResponse;

constexpr void __set__Identifier_k__BackingField(::System::Object*  value) ;

constexpr ::System::Object* __get__Identifier_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__Identifier_k__BackingField() const;

constexpr void __set__SignalType_k__BackingField(::System::Type*  value) ;

constexpr ::System::Type* __get__SignalType_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__SignalType_k__BackingField() const;

constexpr void __set__RunAsync_k__BackingField(bool  value) ;

constexpr bool& __get__RunAsync_k__BackingField() ;

constexpr bool const& __get__RunAsync_k__BackingField() const;

constexpr void __set__TickPriority_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__TickPriority_k__BackingField() ;

constexpr int32_t const& __get__TickPriority_k__BackingField() const;

constexpr void __set__MissingHandlerResponse_k__BackingField(::Zenject::SignalMissingHandlerResponses  value) ;

constexpr ::Zenject::SignalMissingHandlerResponses& __get__MissingHandlerResponse_k__BackingField() ;

constexpr ::Zenject::SignalMissingHandlerResponses const& __get__MissingHandlerResponse_k__BackingField() const;

static inline ::Zenject::SignalDeclarationBindInfo* New_ctor(::System::Type*  signalType) ;

/// @brief Method .ctor addr 0x2ec244c size 0x28 virtual false final false
inline void _ctor(::System::Type*  signalType) ;

/// @brief Method get_Identifier addr 0x2ec2474 size 0x8 virtual false final false
inline ::System::Object* get_Identifier() ;

/// @brief Method set_Identifier addr 0x2ec247c size 0x8 virtual false final false
inline void set_Identifier(::System::Object*  value) ;

/// @brief Method get_SignalType addr 0x2ec2484 size 0x8 virtual false final false
inline ::System::Type* get_SignalType() ;

/// @brief Method set_SignalType addr 0x2ec248c size 0x8 virtual false final false
inline void set_SignalType(::System::Type*  value) ;

/// @brief Method get_RunAsync addr 0x2ec2494 size 0x8 virtual false final false
inline bool get_RunAsync() ;

/// @brief Method set_RunAsync addr 0x2ec249c size 0xc virtual false final false
inline void set_RunAsync(bool  value) ;

/// @brief Method get_TickPriority addr 0x2ec24a8 size 0x8 virtual false final false
inline int32_t get_TickPriority() ;

/// @brief Method set_TickPriority addr 0x2ec24b0 size 0x8 virtual false final false
inline void set_TickPriority(int32_t  value) ;

/// @brief Method get_MissingHandlerResponse addr 0x2ec24b8 size 0x8 virtual false final false
inline ::Zenject::SignalMissingHandlerResponses get_MissingHandlerResponse() ;

/// @brief Method set_MissingHandlerResponse addr 0x2ec24c0 size 0x8 virtual false final false
inline void set_MissingHandlerResponse(::Zenject::SignalMissingHandlerResponses  value) ;

// Ctor Parameters [CppParam { name: "", ty: "SignalDeclarationBindInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignalDeclarationBindInfo(SignalDeclarationBindInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignalDeclarationBindInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignalDeclarationBindInfo(SignalDeclarationBindInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SignalDeclarationBindInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalDeclarationBindInfo, 0x30>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::SignalDeclarationBindInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalDeclarationBindInfo*, "Zenject", "SignalDeclarationBindInfo");
