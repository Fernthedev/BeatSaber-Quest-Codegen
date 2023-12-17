#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CancellationToken)
namespace System {
class Object;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading {
class __CancellationToken____c;
}
namespace System {
class Action;
}
namespace System::Threading {
struct CancellationTokenRegistration;
}
// Forward declare root types
namespace System::Threading {
class __CancellationToken____c;
}
namespace System::Threading {
struct CancellationToken;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::__CancellationToken____c);
MARK_VAL_T(::System::Threading::CancellationToken);
// Type: ::<>c
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2676))
// CS Name: ::CancellationToken::<>c*
class CORDL_TYPE __CancellationToken____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::System::Threading::__CancellationToken____c*  value) ;

static inline ::System::Threading::__CancellationToken____c* getStaticF___9() ;

static inline ::System::Threading::__CancellationToken____c* New_ctor() ;

/// @brief Method .ctor addr 0x2610d0c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__26_0 addr 0x2610d14 size 0x6c virtual false final false
inline void __cctor_b__26_0(::System::Object*  obj) ;

// Ctor Parameters [CppParam { name: "", ty: "__CancellationToken____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CancellationToken____c(__CancellationToken____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CancellationToken____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CancellationToken____c(__CancellationToken____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CancellationToken____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__CancellationToken____c, 0x10>, "Size mismatch!");

} // namespace end def System::Threading
// Type: System.Threading::CancellationToken
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2677))
// CS Name: ::System.Threading::CancellationToken
struct CORDL_TYPE CancellationToken : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
using __c = ::System::Threading::__CancellationToken____c;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _source offset 0x0
 __declspec(property(get=__get__source, put=__set__source)) ::System::Threading::CancellationTokenSource*  _source;

 __declspec(property(get=get_IsCancellationRequested)) bool  IsCancellationRequested;

 __declspec(property(get=get_CanBeCanceled)) bool  CanBeCanceled;

constexpr void __set__source(::System::Threading::CancellationTokenSource*  value) ;

constexpr ::System::Threading::CancellationTokenSource* __get__source() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> __get__source() const;

static inline void setStaticF_s_actionToActionObjShunt(::System::Action_1<::System::Object*>*  value) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_s_actionToActionObjShunt() ;

/// @brief Method get_None addr 0x261038c size 0x8 virtual false final false
static inline ::System::Threading::CancellationToken get_None() ;

/// @brief Method get_IsCancellationRequested addr 0x2610394 size 0x2c virtual false final false
inline bool get_IsCancellationRequested() ;

/// @brief Method get_CanBeCanceled addr 0x26103dc size 0x10 virtual false final false
inline bool get_CanBeCanceled() ;

/// @brief Method .ctor addr 0x26103ec size 0x8 virtual false final false
inline void _ctor(::System::Threading::CancellationTokenSource*  source) ;

/// @brief Method .ctor addr 0x26103f4 size 0x74 virtual false final false
inline void _ctor(bool  canceled) ;

/// @brief Method Register addr 0x2610468 size 0xec virtual false final false
inline ::System::Threading::CancellationTokenRegistration Register(::System::Action*  callback) ;

/// @brief Method Register addr 0x2610684 size 0x38 virtual false final false
inline ::System::Threading::CancellationTokenRegistration Register(::System::Action_1<::System::Object*>*  callback, ::System::Object*  state) ;

/// @brief Method InternalRegisterWithoutEC addr 0x26106bc size 0x38 virtual false final false
inline ::System::Threading::CancellationTokenRegistration InternalRegisterWithoutEC(::System::Action_1<::System::Object*>*  callback, ::System::Object*  state) ;

/// @brief Method Register addr 0x2610554 size 0x130 virtual false final false
inline ::System::Threading::CancellationTokenRegistration Register(::System::Action_1<::System::Object*>*  callback, ::System::Object*  state, bool  useSynchronizationContext, bool  useExecutionContext) ;

/// @brief Method Equals addr 0x2610a3c size 0x10 virtual false final false
inline bool Equals(::System::Threading::CancellationToken  other) ;

/// @brief Method Equals addr 0x2610a4c size 0x78 virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode addr 0x2610ac4 size 0x74 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x2610b38 size 0xc virtual false final false
static inline bool op_Equality(::System::Threading::CancellationToken  left, ::System::Threading::CancellationToken  right) ;

/// @brief Method op_Inequality addr 0x2610b44 size 0xc virtual false final false
static inline bool op_Inequality(::System::Threading::CancellationToken  left, ::System::Threading::CancellationToken  right) ;

/// @brief Method ThrowIfCancellationRequested addr 0x2610b50 size 0x38 virtual false final false
inline void ThrowIfCancellationRequested() ;

/// @brief Method ThrowOperationCanceledException addr 0x2610b88 size 0x5c virtual false final false
inline void ThrowOperationCanceledException() ;

// Ctor Parameters [CppParam { name: "_source", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None }]
constexpr CancellationToken(::System::Threading::CancellationTokenSource*  _source) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CancellationToken(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CancellationToken()  = default;


// Fields

// Static field s_actionToActionObjShunt


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::CancellationToken, 0x8>, "Size mismatch!");

} // namespace end def System::Threading
NEED_NO_BOX(::System::Threading::__CancellationToken____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__CancellationToken____c*, "System.Threading", "CancellationToken/<>c");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::CancellationToken, "System.Threading", "CancellationToken");
