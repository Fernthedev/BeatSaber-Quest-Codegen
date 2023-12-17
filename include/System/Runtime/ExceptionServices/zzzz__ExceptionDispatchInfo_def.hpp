#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExceptionDispatchInfo)
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::ExceptionServices::ExceptionDispatchInfo);
// Type: System.Runtime.ExceptionServices::ExceptionDispatchInfo
namespace System::Runtime::ExceptionServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3349))
// CS Name: ::System.Runtime.ExceptionServices::ExceptionDispatchInfo*
class CORDL_TYPE ExceptionDispatchInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Exception offset 0x10
 __declspec(property(get=__get_m_Exception, put=__set_m_Exception)) ::System::Exception*  m_Exception;

/// @brief Field m_stackTrace offset 0x18
 __declspec(property(get=__get_m_stackTrace, put=__set_m_stackTrace)) ::System::Object*  m_stackTrace;

 __declspec(property(get=get_BinaryStackTraceArray)) ::System::Object*  BinaryStackTraceArray;

 __declspec(property(get=get_SourceException)) ::System::Exception*  SourceException;

constexpr void __set_m_Exception(::System::Exception*  value) ;

constexpr ::System::Exception* __get_m_Exception() ;

constexpr ::cordl_internals::to_const_pointer<::System::Exception*> __get_m_Exception() const;

constexpr void __set_m_stackTrace(::System::Object*  value) ;

constexpr ::System::Object* __get_m_stackTrace() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_m_stackTrace() const;

static inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* New_ctor(::System::Exception*  exception) ;

/// @brief Method .ctor addr 0x24da590 size 0x128 virtual false final false
inline void _ctor(::System::Exception*  exception) ;

/// @brief Method get_BinaryStackTraceArray addr 0x24da6b8 size 0x8 virtual false final false
inline ::System::Object* get_BinaryStackTraceArray() ;

/// @brief Method Capture addr 0x24da14c size 0xcc virtual false final false
static inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* Capture(::System::Exception*  source) ;

/// @brief Method get_SourceException addr 0x24da6c0 size 0x8 virtual false final false
inline ::System::Exception* get_SourceException() ;

/// @brief Method Throw addr 0x24da218 size 0x44 virtual false final false
inline void Throw() ;

/// @brief Method Throw addr 0x24da6c8 size 0x18 virtual false final false
static inline void Throw(::System::Exception*  source) ;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionDispatchInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExceptionDispatchInfo(ExceptionDispatchInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionDispatchInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExceptionDispatchInfo(ExceptionDispatchInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ExceptionDispatchInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::ExceptionServices::ExceptionDispatchInfo, 0x20>, "Size mismatch!");

} // namespace end def System::Runtime::ExceptionServices
NEED_NO_BOX(::System::Runtime::ExceptionServices::ExceptionDispatchInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, "System.Runtime.ExceptionServices", "ExceptionDispatchInfo");
