#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AggregateException)
namespace System {
class Exception;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace System {
class AggregateException;
}
// Write type traits
MARK_REF_PTR_T(::System::AggregateException);
// Type: System::AggregateException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2342))
// CS Name: ::System::AggregateException*
class CORDL_TYPE AggregateException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::System::Exception)]{};

/// @brief Field m_innerExceptions offset 0x90
 __declspec(property(get=__get_m_innerExceptions, put=__set_m_innerExceptions)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>*  m_innerExceptions;

 __declspec(property(get=get_InnerExceptions)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>*  InnerExceptions;

 __declspec(property(get=get_Message)) ::StringW  Message;

constexpr void __set_m_innerExceptions(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>*  value) ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* __get_m_innerExceptions() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>*> __get_m_innerExceptions() const;

static inline ::System::AggregateException* New_ctor() ;

/// @brief Method .ctor addr 0x251f17c size 0x114 virtual false final false
inline void _ctor() ;

static inline ::System::AggregateException* New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Exception*>*  innerExceptions) ;

/// @brief Method .ctor addr 0x251f290 size 0x58 virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Exception*>*  innerExceptions) ;

static inline ::System::AggregateException* New_ctor(::ArrayW<::System::Exception*,::Array<::System::Exception*>*>  innerExceptions) ;

/// @brief Method .ctor addr 0x251f3ac size 0x58 virtual false final false
inline void _ctor(::ArrayW<::System::Exception*,::Array<::System::Exception*>*>  innerExceptions) ;

static inline ::System::AggregateException* New_ctor(::StringW  message, ::System::Collections::Generic::IEnumerable_1<::System::Exception*>*  innerExceptions) ;

/// @brief Method .ctor addr 0x251f2e8 size 0xc4 virtual false final false
inline void _ctor(::StringW  message, ::System::Collections::Generic::IEnumerable_1<::System::Exception*>*  innerExceptions) ;

static inline ::System::AggregateException* New_ctor(::StringW  message, ::ArrayW<::System::Exception*,::Array<::System::Exception*>*>  innerExceptions) ;

/// @brief Method .ctor addr 0x251f404 size 0x4 virtual false final false
inline void _ctor(::StringW  message, ::ArrayW<::System::Exception*,::Array<::System::Exception*>*>  innerExceptions) ;

static inline ::System::AggregateException* New_ctor(::StringW  message, ::System::Collections::Generic::IList_1<::System::Exception*>*  innerExceptions) ;

/// @brief Method .ctor addr 0x251f408 size 0x3c0 virtual false final false
inline void _ctor(::StringW  message, ::System::Collections::Generic::IList_1<::System::Exception*>*  innerExceptions) ;

static inline ::System::AggregateException* New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*  innerExceptionInfos) ;

/// @brief Method .ctor addr 0x251f7ec size 0x58 virtual false final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*  innerExceptionInfos) ;

static inline ::System::AggregateException* New_ctor(::StringW  message, ::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*  innerExceptionInfos) ;

/// @brief Method .ctor addr 0x251f844 size 0xc4 virtual false final false
inline void _ctor(::StringW  message, ::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*  innerExceptionInfos) ;

static inline ::System::AggregateException* New_ctor(::StringW  message, ::System::Collections::Generic::IList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*  innerExceptionInfos) ;

/// @brief Method .ctor addr 0x251f908 size 0x43c virtual false final false
inline void _ctor(::StringW  message, ::System::Collections::Generic::IList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*  innerExceptionInfos) ;

static inline ::System::AggregateException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x251fd44 size 0x1e8 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetObjectData addr 0x251ff2c size 0x14c virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_InnerExceptions addr 0x2520078 size 0x8 virtual false final false
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* get_InnerExceptions() ;

/// @brief Method Flatten addr 0x2520080 size 0x3c0 virtual false final false
inline ::System::AggregateException* Flatten() ;

/// @brief Method get_Message addr 0x2520440 size 0x18c virtual true final false
inline ::StringW get_Message() ;

/// @brief Method ToString addr 0x25205cc size 0x214 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "AggregateException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AggregateException(AggregateException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AggregateException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AggregateException(AggregateException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AggregateException()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::AggregateException, 0x98>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::AggregateException);
DEFINE_IL2CPP_ARG_TYPE(::System::AggregateException*, "System", "AggregateException");
