#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HMAutoincrementedRequestId_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMAsyncRequest)
namespace GlobalNamespace {
class __HMAsyncRequest__CancelHander;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class __HMAsyncRequest__CancelHander;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HMAsyncRequest);
MARK_REF_PTR_T(::GlobalNamespace::__HMAsyncRequest__CancelHander);
// Type: ::CancelHander
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14369))
// CS Name: ::HMAsyncRequest::CancelHander*
class CORDL_TYPE __HMAsyncRequest__CancelHander : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__HMAsyncRequest__CancelHander* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x20f2f50 size 0x12c virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x20f307c size 0x14 virtual true final false
inline void Invoke(::GlobalNamespace::HMAsyncRequest*  request) ;

/// @brief Method BeginInvoke addr 0x20f3090 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::HMAsyncRequest*  request, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x20f30b0 size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HMAsyncRequest__CancelHander", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HMAsyncRequest__CancelHander(__HMAsyncRequest__CancelHander && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HMAsyncRequest__CancelHander", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HMAsyncRequest__CancelHander(__HMAsyncRequest__CancelHander const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HMAsyncRequest__CancelHander()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HMAsyncRequest__CancelHander, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::HMAsyncRequest
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14371))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14370))
// CS Name: ::HMAsyncRequest*
class CORDL_TYPE HMAsyncRequest : public ::GlobalNamespace::HMAutoincrementedRequestId {
public:
// Declarations
using CancelHander = ::GlobalNamespace::__HMAsyncRequest__CancelHander;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::HMAutoincrementedRequestId)]{};

/// @brief Field _cancelled offset 0x18
 __declspec(property(get=__get__cancelled, put=__set__cancelled)) bool  _cancelled;

/// @brief Field _cancelHander offset 0x20
 __declspec(property(get=__get__cancelHander, put=__set__cancelHander)) ::GlobalNamespace::__HMAsyncRequest__CancelHander*  _cancelHander;

 __declspec(property(get=get_CancelHandler, put=set_CancelHandler)) ::GlobalNamespace::__HMAsyncRequest__CancelHander*  CancelHandler;

 __declspec(property(get=get_cancelled)) bool  cancelled;

constexpr void __set__cancelled(bool  value) ;

constexpr bool& __get__cancelled() ;

constexpr bool const& __get__cancelled() const;

constexpr void __set__cancelHander(::GlobalNamespace::__HMAsyncRequest__CancelHander*  value) ;

constexpr ::GlobalNamespace::__HMAsyncRequest__CancelHander* __get__cancelHander() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__HMAsyncRequest__CancelHander*> __get__cancelHander() const;

/// @brief Method get_CancelHandler addr 0x20f2ea8 size 0x8 virtual false final false
inline ::GlobalNamespace::__HMAsyncRequest__CancelHander* get_CancelHandler() ;

/// @brief Method set_CancelHandler addr 0x20f2eb0 size 0x8 virtual false final false
inline void set_CancelHandler(::GlobalNamespace::__HMAsyncRequest__CancelHander*  value) ;

/// @brief Method get_cancelled addr 0x20f2eb8 size 0x8 virtual false final false
inline bool get_cancelled() ;

/// @brief Method Cancel addr 0x20f2ec0 size 0x28 virtual true final false
inline void Cancel() ;

static inline ::GlobalNamespace::HMAsyncRequest* New_ctor() ;

/// @brief Method .ctor addr 0x20f2ee8 size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HMAsyncRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HMAsyncRequest(HMAsyncRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HMAsyncRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HMAsyncRequest(HMAsyncRequest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HMAsyncRequest()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HMAsyncRequest, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HMAsyncRequest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HMAsyncRequest*, "", "HMAsyncRequest");
NEED_NO_BOX(::GlobalNamespace::__HMAsyncRequest__CancelHander);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HMAsyncRequest__CancelHander*, "", "HMAsyncRequest/CancelHander");
