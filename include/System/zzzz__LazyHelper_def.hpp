#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LazyHelper)
namespace System {
class Type;
}
namespace System {
struct LazyState;
}
namespace System::Threading {
struct LazyThreadSafetyMode;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System {
class Object;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
class LazyHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::LazyHelper);
// Type: System::LazyHelper
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2431))
// CS Name: ::System::LazyHelper*
class CORDL_TYPE LazyHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <State>k__BackingField offset 0x10
 __declspec(property(get=__get__State_k__BackingField, put=__set__State_k__BackingField)) ::System::LazyState  _State_k__BackingField;

/// @brief Field _exceptionDispatch offset 0x18
 __declspec(property(get=__get__exceptionDispatch, put=__set__exceptionDispatch)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  _exceptionDispatch;

 __declspec(property(get=get_State)) ::System::LazyState  State;

static inline void setStaticF_NoneViaConstructor(::System::LazyHelper*  value) ;

static inline ::System::LazyHelper* getStaticF_NoneViaConstructor() ;

static inline void setStaticF_NoneViaFactory(::System::LazyHelper*  value) ;

static inline ::System::LazyHelper* getStaticF_NoneViaFactory() ;

static inline void setStaticF_PublicationOnlyViaConstructor(::System::LazyHelper*  value) ;

static inline ::System::LazyHelper* getStaticF_PublicationOnlyViaConstructor() ;

static inline void setStaticF_PublicationOnlyViaFactory(::System::LazyHelper*  value) ;

static inline ::System::LazyHelper* getStaticF_PublicationOnlyViaFactory() ;

static inline void setStaticF_PublicationOnlyWaitForOtherThreadToPublish(::System::LazyHelper*  value) ;

static inline ::System::LazyHelper* getStaticF_PublicationOnlyWaitForOtherThreadToPublish() ;

constexpr void __set__State_k__BackingField(::System::LazyState  value) ;

constexpr ::System::LazyState& __get__State_k__BackingField() ;

constexpr ::System::LazyState const& __get__State_k__BackingField() const;

constexpr void __set__exceptionDispatch(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* __get__exceptionDispatch() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> __get__exceptionDispatch() const;

/// @brief Method get_State addr 0x25add1c size 0x8 virtual false final false
inline ::System::LazyState get_State() ;

static inline ::System::LazyHelper* New_ctor(::System::LazyState  state) ;

/// @brief Method .ctor addr 0x25add24 size 0x28 virtual false final false
inline void _ctor(::System::LazyState  state) ;

static inline ::System::LazyHelper* New_ctor(::System::Threading::LazyThreadSafetyMode  mode, ::System::Exception*  exception) ;

/// @brief Method .ctor addr 0x25add4c size 0x50 virtual false final false
inline void _ctor(::System::Threading::LazyThreadSafetyMode  mode, ::System::Exception*  exception) ;

/// @brief Method ThrowException addr 0x25add9c size 0x1c virtual false final false
inline void ThrowException() ;

/// @brief Method Create addr 0x25addb8 size 0x140 virtual false final false
static inline ::System::LazyHelper* Create(::System::Threading::LazyThreadSafetyMode  mode, bool  useDefaultConstructor) ;

/// @brief Method CreateViaDefaultConstructor addr 0x25adef8 size 0xcc virtual false final false
static inline ::System::Object* CreateViaDefaultConstructor(::System::Type*  type) ;

// Ctor Parameters [CppParam { name: "", ty: "LazyHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LazyHelper(LazyHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LazyHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LazyHelper(LazyHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LazyHelper()  = default;
public:


// Fields

// Static field NoneViaConstructor

// Static field NoneViaFactory

// Static field PublicationOnlyViaConstructor

// Static field PublicationOnlyViaFactory

// Static field PublicationOnlyWaitForOtherThreadToPublish


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::LazyHelper, 0x20>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::LazyHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::LazyHelper*, "System", "LazyHelper");
